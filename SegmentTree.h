//
// Created by yuanr on 10/31/2022.
//

#ifndef SEGMENTTREE_SEGMENTTREE_H
#define SEGMENTTREE_SEGMENTTREE_H


class SegmentTree {
private:
    int n;
    int* maxArr;
    int* minArr;

public:
    SegmentTree()=delete;
    explicit SegmentTree(std::vector<int>& vec);
    SegmentTree(SegmentTree& other);
    SegmentTree& operator=(const SegmentTree& other);
    ~SegmentTree();
    void update(int i, int x);
    int getMin(int i, int j, int low = 0, int high = -1, int pos = 1);
    int getMax(int i, int j, int low = 0, int high = -1, int pos = 1);
};


#endif //SEGMENTTREE_SEGMENTTREE_H
