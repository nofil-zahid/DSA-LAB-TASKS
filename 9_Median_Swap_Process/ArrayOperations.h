//
// Created by Administrator on 12/11/2022.
//

#ifndef INC_9_MEDIAN_SWAP_PROCESS_ARRAYOPERATIONS_H
#define INC_9_MEDIAN_SWAP_PROCESS_ARRAYOPERATIONS_H

#include <iostream>
using namespace std;

class ArrayOperations {
private :
    int *A;
    int *M;
    int size;
    int median;

    void insertionSort(){
        for(int i=1;i<size;i++)
        {
            int temp = M[i];
            int j=i-1;
            while(j>=0 && temp<M[j])
            {
                M[j+1]=M[j];
                j--;
            }
            M[j+1]=temp;
        }
    }

    void med(){
        if(size&1){
            median = M[(size/2)];
        }
        else{
            median = (( (float)M[size/2] + (float)M[(size/2)-1] )/2.0);
        }
    }

    void settingMedian(){
        for(int i=0; i<size; i++){
            if(A[i] == median){
                swap(A[i], A[size/2]);
            }
        }
    }

public:
    ArrayOperations(int size){
        this->size = size ;
        A = new int[size];
        M = new int[size];
    }

    void putElements(){
        int element ;
        for(int i=0; i<size; i++){
            cin>>element;
            M[i] = A[i] = element;
        }
        insertionSort(); // Sorting all the elements of M array bcz we'll use it to find median
        med();           // Median of given array
    }

    float getMedian(){
        return median;
    }

    void medianLessGreat(){
        settingMedian();

        int shift=0;
        for(int i=(size/2)-1; i>=0; --i){
            if(A[i]>median){
                for(int j=i; j<size/2; j++){
                    swap(A[j], A[j+1]);
                }
                shift++;
            }
        }

        for(int i=(size/2)+1; i<size; i++){
            if(A[i]<median){
                for(int j=i; j>=shift; --j){
                    swap(A[j], A[j-1]);
                }
                shift--;
            }
        }

        printArray();
    }

    void printArray(){
        for(int i=0; i<size; i++){
            cout<<A[i]<<" ";
        }
        cout<<"\n";
    }
};


#endif //INC_9_MEDIAN_SWAP_PROCESS_ARRAYOPERATIONS_H
