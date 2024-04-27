//
// Created by Administrator on 12/8/2022.
//

#ifndef INC_5_UNIQUE_IN_ARRAY_ARRAYOPERATION_H
#define INC_5_UNIQUE_IN_ARRAY_ARRAYOPERATION_H

#include<iostream>
#include<map>

using namespace std;

class ArrayOperation {
    int *A;
    int size;
    map<int,int> frequency ;

    void putRandom(){
        for(int i=0; i<size; i++){
            A[i] = 1 + rand()%100 ;
        }
    }

    void putArray(int a[]){
        for(int i=0; i<size; i++){
            A[i] = a[i];
        }
    }

public:
    ArrayOperation(int size){
        A = new int[size];
        this->size = size;

        putRandom();
    }

    ArrayOperation(int a[], int size){
        A = new int[size];
        this->size = size;

        putArray(a);
    }

    void elementsFrquency(){
        for(int i=0; i<size; i++) {
            if(frequency.find(A[i])!=frequency.end()){       // value found
                ++frequency[A[i]];
            }
            else {
                frequency[A[i]] = 1 ;
            }
        }

        for(auto key : frequency) {
            if(key.second == 1)
                cout<<"Number : "<<key.first<<" , Frequency : "<<key.second<<endl;
        }
    }

    void printArray(){
        for(int i=0; i<size; i++){
            cout<<A[i]<<" ";
        }
        cout<<"\n";
    }
};


#endif //INC_5_UNIQUE_IN_ARRAY_ARRAYOPERATION_H