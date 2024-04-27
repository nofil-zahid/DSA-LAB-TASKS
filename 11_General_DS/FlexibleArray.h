//
// Created by Administrator on 12/14/2022.
//

#ifndef INC_11_GENERAL_DS_FLEXIBLEARRAY_H
#define INC_11_GENERAL_DS_FLEXIBLEARRAY_H


class FlexibleArray {
    int *A;
    int size;
    int cur_index;

    void shiftRight(int starting_index, int ending_index){

    }

public:
    FlexibleArray(int size=10){
        A = new int[size];
        this->size = size;
        cur_index = 0;
    }

    bool insertLast(int x){
        A[cur_index++] = x;
        return true;
    }

    bool insertFirst(int x){

    }
};


#endif //INC_11_GENERAL_DS_FLEXIBLEARRAY_H
