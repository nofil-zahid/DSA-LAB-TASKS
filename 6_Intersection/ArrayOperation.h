//
// Created by Administrator on 12/8/2022.
//

#ifndef INC_6_INTERSECTION_ARRAYOPERATION_H
#define INC_6_INTERSECTION_ARRAYOPERATION_H

#include <iostream>
#include <cstdlib>
#include <ctime>

class ArrayOperation {
    int *A;
    int *B;
    int *C;
    int size_A;
    int size_B;
    int c;

    void putRandom(int array[], int size){
        srand(time(NULL));
        for(int i=0; i<size; i++){
            array[i] = 1 + rand()%100 ;
        }
    }

    void intersection(){
        int index=0;
        for(int i=0; i<size_A; i++){
            for(int j=0; j<size_B; j++){
                if(A[i]==B[j]){
                    C[index++] = A[i];
                    break;
                }
            }
        }
    }

public:
    ArrayOperation(int size_A, int size_B){
        this->size_A = size_A ;
        this->size_B = size_B ;
        c=0;

        A = new int[size_A];
        B = new int[size_B];
        size_A>size_B ? c=size_B : c=size_A ;
        C = new int[c];

        putRandom(A, size_A);
        putRandom(B, size_B);
    }

    void printBothArray() {
        std::cout << "Random generated array 1 : " << std::endl;
        for (int i = 0; i < size_A; i++) {
            std::cout << A[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Random generated array 2 : " << std::endl;
        for (int i = 0; i < size_B; i++) {
            std::cout << B[i] << " ";
        }
        std::cout << std::endl;
    }

    bool printIntersection(){
        intersection();
        bool isCommon = false ;
        for(int i=0; i<c; i++){
            std::cout<<C[i]<<" ";
            isCommon = true;
        }
        return isCommon;
    }
};


#endif //INC_6_INTERSECTION_ARRAYOPERATION_H
