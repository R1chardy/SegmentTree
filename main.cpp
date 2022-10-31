#include <iostream>
#include <vector>
#include "SegmentTree.h"

using namespace std;

int main() {
    vector<int> arr = {6,10,5,2,7,1,0,9};
    SegmentTree test(arr);

    cout << "---------------------------Testing Min---------------------------" << endl;

    //{6,10,5,2,7,1,0,9};
    cout << "min from 3 to 5: " << test.getMin(3, 5) << endl;
    cout << "min from 0 to 7: " << test.getMin(0, 7) << endl;
    cout << "min from 0 to 0: " << test.getMin(0, 0) << endl;
    cout << "min from 7 to 7: " << test.getMin(7, 7) << endl;
    cout << "min from 3 to 4: " << test.getMin(3, 4) << endl;
    cout << "min from 1 to 4: " << test.getMin(1, 4) << endl;

    cout << "updating (0 50)" << endl;
    test.update(0, 50); // {50,10,5,2,7,1,0,9}

    cout << "min from 3 to 5: " << test.getMin(3, 5) << endl;
    cout << "min from 0 to 7: " << test.getMin(0, 7) << endl;
    cout << "min from 0 to 0: " << test.getMin(0, 0) << endl;
    cout << "min from 7 to 7: " << test.getMin(7, 7) << endl;
    cout << "min from 3 to 4: " << test.getMin(3, 4) << endl;
    cout << "min from 1 to 4: " << test.getMin(1, 4) << endl;

    cout << "updating (0 -10)" << endl;
    test.update(0, -10); // {-10,10,5,2,7,1,0,9}

    cout << "min from 3 to 5: " << test.getMin(3, 5) << endl;
    cout << "min from 0 to 7: " << test.getMin(0, 7) << endl;
    cout << "min from 0 to 0: " << test.getMin(0, 0) << endl;
    cout << "min from 7 to 7: " << test.getMin(7, 7) << endl;
    cout << "min from 3 to 4: " << test.getMin(3, 4) << endl;
    cout << "min from 1 to 4: " << test.getMin(1, 4) << endl;

    cout << "updating (3 0)" << endl;
    test.update(3, 0); // {-10,10,5,0,7,1,0,9}

    cout << "min from 3 to 5: " << test.getMin(3, 5) << endl;
    cout << "min from 0 to 7: " << test.getMin(0, 7) << endl;
    cout << "min from 0 to 0: " << test.getMin(0, 0) << endl;
    cout << "min from 7 to 7: " << test.getMin(7, 7) << endl;
    cout << "min from 3 to 4: " << test.getMin(3, 4) << endl;
    cout << "min from 1 to 4: " << test.getMin(1, 4) << endl;

    cout << "updating (7 -11)" << endl;
    test.update(7, -11); // {-10,10,5,0,7,1,0,-11}

    cout << "min from 3 to 5: " << test.getMin(3, 5) << endl;
    cout << "min from 0 to 7: " << test.getMin(0, 7) << endl;
    cout << "min from 0 to 0: " << test.getMin(0, 0) << endl;
    cout << "min from 7 to 7: " << test.getMin(7, 7) << endl;
    cout << "min from 3 to 4: " << test.getMin(3, 4) << endl;
    cout << "min from 1 to 4: " << test.getMin(1, 4) << endl;

    cout << "---------------------------Testing Max---------------------------" << endl;

    SegmentTree test3(arr);
    SegmentTree test2(test3);

    //{6,10,5,2,7,1,0,9};
    cout << "max from 3 to 5: " << test2.getMax(3, 5) << endl;
    cout << "max from 0 to 7: " << test2.getMax(0, 7) << endl;
    cout << "max from 0 to 0: " << test2.getMax(0, 0) << endl;
    cout << "max from 7 to 7: " << test2.getMax(7, 7) << endl;
    cout << "max from 3 to 4: " << test2.getMax(3, 4) << endl;
    cout << "max from 1 to 4: " << test2.getMax(1, 4) << endl;

    cout << "updating (0 50)" << endl;
    test2.update(0, 50); // {50,10,5,2,7,1,0,9}

    cout << "max from 3 to 5: " << test2.getMax(3, 5) << endl;
    cout << "max from 0 to 7: " << test2.getMax(0, 7) << endl;
    cout << "max from 0 to 0: " << test2.getMax(0, 0) << endl;
    cout << "max from 7 to 7: " << test2.getMax(7, 7) << endl;
    cout << "max from 3 to 4: " << test2.getMax(3, 4) << endl;
    cout << "max from 1 to 4: " << test2.getMax(1, 4) << endl;

    SegmentTree test4 = test2;

    cout << "updating (0 -10)" << endl;
    test4.update(0, -10); // {-10,10,5,2,7,1,0,9}


    cout << "max from 3 to 5: " << test4.getMax(3, 5) << endl;
    cout << "max from 0 to 7: " << test4.getMax(0, 7) << endl;
    cout << "max from 0 to 0: " << test4.getMax(0, 0) << endl;
    cout << "max from 7 to 7: " << test4.getMax(7, 7) << endl;
    cout << "max from 3 to 4: " << test4.getMax(3, 4) << endl;
    cout << "max from 1 to 4: " << test4.getMax(1, 4) << endl;

    cout << "updating (3 43)" << endl;
    test4.update(3, 43); // {-10,10,5,43,7,1,0,9}

    cout << "max from 3 to 5: " << test4.getMax(3, 5) << endl;
    cout << "max from 0 to 7: " << test4.getMax(0, 7) << endl;
    cout << "max from 0 to 0: " << test4.getMax(0, 0) << endl;
    cout << "max from 7 to 7: " << test4.getMax(7, 7) << endl;
    cout << "max from 3 to 4: " << test4.getMax(3, 4) << endl;
    cout << "max from 1 to 4: " << test4.getMax(1, 4) << endl;

    cout << "updating (7 44)" << endl;
    test4.update(7, 44); // {-10,10,5,43,7,1,0,44}

    cout << "max from 3 to 5: " << test4.getMax(3, 5) << endl;
    cout << "max from 0 to 7: " << test4.getMax(0, 7) << endl;
    cout << "max from 0 to 0: " << test4.getMax(0, 0) << endl;
    cout << "max from 7 to 7: " << test4.getMax(7, 7) << endl;
    cout << "max from 3 to 4: " << test4.getMax(3, 4) << endl;
    cout << "max from 1 to 4: " << test4.getMax(1, 4) << endl;
    cout << "max from 3 to 6: " << test4.getMax(3, 6) << endl;
    cout << "max from 4 to 6: " << test4.getMax(4, 6) << endl;

    return 0;
}
