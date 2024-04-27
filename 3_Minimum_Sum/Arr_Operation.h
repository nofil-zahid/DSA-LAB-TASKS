//
// Created by Administrator on 12/7/2022.
//

#ifndef INC_3_MINIMUM_SUM_ARR_OPERATION_H
#define INC_3_MINIMUM_SUM_ARR_OPERATION_H

#include "iostream"
#include "unistd.h"
#include "cstdlib"

using namespace std;

class Arr_Operation {
private:
    int size;
    int *A;
    int n1_smallest;
    int n2_smallest;

    void putElementsInArray(int arr[]){
        for(int i=0; i<size; i++){
            A[i] = arr[i];

            findMinimum();
        }
    }

    void randomElements(){
        for(int i=0; i<size; i++){
            A[i] = 1+rand()%100 ;

            findMinimum();
        }
    }

    void findMinimum()
    {
        n1_smallest=A[0];
        n2_smallest=A[1];

        for(int i=0; i<size; i++){
            if(n1_smallest>A[i]) {
                n1_smallest = A[i];
                continue;
            }
            if(n2_smallest>A[i] && A[i]!=n1_smallest)
                n2_smallest = A[i];
        }
    }

public:
    Arr_Operation(int arr[], int size){
        A = new int[size];
        this->size = size;
        this->n1_smallest = 0;
        this->n2_smallest = 0;

        putElementsInArray(arr);
    }

    Arr_Operation(int size){
        this->size = size;
        randomElements();
    }

    int minimumSum(){
        return n1_smallest + n2_smallest;
    }

    void printArray(){
        for(int i=0 ; i<size; i++){
            cout<<A[i]<<" ";
        }
        cout<<"\n";
    }

    void inputArray(){
        for(int i=0; i<size; i++){
            cout<<"Element at index "<<i<<" : ";
            cin>>A[i];
        }
        cout<<"\n";
    }
};


#endif //INC_3_MINIMUM_SUM_ARR_OPERATION_H
