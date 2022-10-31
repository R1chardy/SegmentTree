//
// Created by yuanr on 10/31/2022.
//

#include <vector>
#include <cstring>
#include <climits>
#include <cassert>
#include "SegmentTree.h"

SegmentTree::SegmentTree(std::vector<int>& vec) {
    n = vec.size();
    minArr = new int[2*n];
    maxArr = new int[2*n];
    memset(minArr, 0, sizeof(*minArr));
    memset(maxArr, 0, sizeof(*maxArr));
    for(int i = n; i < 2*n; i++){
        minArr[i] = vec[i-n];
        maxArr[i] = vec[i-n];
    }
    for(int i = n-1; i > 0; i--){
        maxArr[i] = std::max(maxArr[2*i], maxArr[2*i+1]);
        minArr[i] = std::min(minArr[2*i], minArr[2*i+1]);
    }
}

SegmentTree::SegmentTree(SegmentTree& other){
    n = other.n;
    minArr = new int[2*n];
    maxArr = new int[2*n];
    for(int i = 0; i < 2*n; i++){
        minArr[i] = other.minArr[i];
        maxArr[i] = other.maxArr[i];
    }
}

SegmentTree& SegmentTree::operator=(const SegmentTree& other){
    if(this == &other){
        return *this;
    }
    n = other.n;
    delete [] minArr;
    delete [] maxArr;
    minArr = new int[2*n];
    maxArr = new int[2*n];
    for(int i = 0; i < 2*n; i++){
        minArr[i] = other.minArr[i];
        maxArr[i] = other.maxArr[i];
    }
    return *this;
}

SegmentTree::~SegmentTree() {
    delete [] minArr;
    delete [] maxArr;
}

void SegmentTree::update(int i, int x){
    assert(i >= 0 && i < n);
    int idx = i+n;
    int sch = x;
    while(idx > 0 && maxArr[idx] != sch){
        maxArr[idx] = sch;
        idx /= 2;
        sch = std::max(maxArr[2*idx], maxArr[2*idx+1]);
    }
    idx = i+n;
    sch = x;
    while(idx > 0 && minArr[idx] != sch){
        minArr[idx] = sch;
        idx /= 2;
        sch = std::min(minArr[2*idx], minArr[2*idx+1]);
    }
}

int SegmentTree::getMin(int i, int j, int low, int high, int pos){
    assert(i >= 0 && j < n && i <= j);
    if (high == -1){
        high = n-1;
    }
    if(i <= low && j >= high){
        return minArr[pos];
    }
    else if(i > high || j < low){
        return INT_MAX;
    }
    else{
        int mid = (low+high)/2;
        return std::min(this->getMin(i, j, low, mid, 2*pos), this->getMin(i, j, mid+1, high, 2*pos+1));
    }
}

int SegmentTree::getMax(int i, int j, int low, int high, int pos){
    assert(i >= 0 && j < n && i <= j);
    if (high == -1){
        high = n-1;
    }
    if(i <= low && j >= high){
        return maxArr[pos];
    }
    else if(i > high || j < low){
        return INT_MIN;
    }
    else{
        int mid = (low+high)/2;
        return std::max(this->getMax(i, j, low, mid, 2*pos), this->getMax(i, j, mid+1, high, 2*pos+1));
    }
}
