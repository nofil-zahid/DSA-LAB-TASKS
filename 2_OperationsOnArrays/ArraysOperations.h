//
// Created by Administrator on 12/4/2022.
//

#ifndef INC_2_OPERATIONSONARRAYS_ARRAYSOPERATIONS_H
#define INC_2_OPERATIONSONARRAYS_ARRAYSOPERATIONS_H

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class ArraysOperations {
private:
    int *A;
    int size;
    long long sum;

    void sorting(int A[]){
        int i, j;
        for(i=1; i<size; i++){
            int j=i-1;
            int k = A[i];
            while(j>=0 && k<A[j]){
                A[j+1] = A[j];
                j--;
            }
            A[j+1] = k;
        }
    }

    void putRandom(int arr[]){
        srand(time(NULL));
        for(int i=0; i<size; i++){
            arr[i] = 1 + rand()%10 ;
            sum += arr[i];
        }
    }

    void inputArray(int arr[]){
        for(int i=0; i<size; i++){
            A[i] = arr[i];
        }
    }

public:
    ArraysOperations(int size){
        this->size = size;
        A = new int[size];
        sum=0;

        putRandom(A);
        sorting(A);
    }

    ArraysOperations(int arr[], int size){
        this->size = size ;
        this->sum = 0;

        inputArray(arr);
    }

    ~ArraysOperations(){
        delete A;
    }

    double mean(){
        return (double)sum/size;
    }

    float median(){
        if(size&1){
            return A[(size/2)];
        }
        return ((float)(A[size/2] + (float)A[(size/2)+1])/2.0);
    }

    int mode(){
        int num = A[0];
        int mode = num;
        int count=0;
        int modeCount=count;

        for(int i=0; i<size; i++)
        {
            if(num == A[i])
                count++;
            else
            {
                if(modeCount < count) {
                    modeCount = count;
                    mode = num;
                }
                count=0;
                num = A[i--];
            }
        }
        if(modeCount < count) {
            modeCount = count;
            mode = num;
        }

        return mode;
    }

    int max(int max_level=1){
        return A[size-max_level];
    }

    void printArray(){
        for(int i=0; i<size; i++){
            cout<<A[i]<<" ";
        }
        cout<<"\n\n";
    }

    void inputArray(int arr[], bool wanna_sort){
        for(int i=0; i<size; i++){
            A[i] = arr[i];
        }

        if(wanna_sort)
            sorting(A);
    }

    void inputArray(){
        for(int i=0; i<size; i++){
            cout<<"Enter element at "<<i<<" index : ";
            cin>>A[i];
        }

        sorting(A);
    }

    bool isPresent(int c){
        int start=0,end=size;

        while(start<=end)
        {
            int mid=(start+end)/2;

            if(A[mid]==c)
                return true;
            else if(A[mid]>c)
                end=--mid;
            else if(A[mid]<c)
                start=++mid;
        }
        return false;
    }
};


#endif //INC_2_OPERATIONSONARRAYS_ARRAYSOPERATIONS_H

/*
 * Write a program, that finds min, second min, max, second max, mean, median, mode of very large
random array. Write program to find if sum of any two elements Ai and Aj also lies in Array A. i.e.
Find Ak such that Ak = Ai + Aj.
 * */
