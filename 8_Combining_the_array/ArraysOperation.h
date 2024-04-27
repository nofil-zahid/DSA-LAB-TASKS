//
// Created by Administrator on 12/8/2022.
//

#ifndef INC_8_COMBINING_THE_ARRAY_ARRAYSOPERATION_H
#define INC_8_COMBINING_THE_ARRAY_ARRAYSOPERATION_H

#include <iostream>

using namespace std;

class ArraysOperation {
private:
    int *A;
    int *B;
    int *C;
    int sizeA;
    int sizeB;
    int newsize;

    void insertionSort(){
        for(int i=1;i<newsize;i++)
        {
            int temp = C[i];
            int j=i-1;
            while(j>=0 && temp<C[j])
            {
                C[j+1]=C[j];
                j--;
            }
            C[j+1]=temp;
        }
    }

    void printArray(){
        for(int i=0; i<newsize; i++) {
            cout<<C[i]<<" ";
        }
        cout<<"\n";
    }

public:
    ArraysOperation(int a, int b){
        // Size of array
        sizeA = a;
        sizeB = b;
        newsize=0;
        // Arrays
        A = new int[a];
        B = new int[b];
        C = new int[a+b];
    }

    void enterArray1(){
        for(int i=0; i<sizeA; i++){
            cin>>A[i];
        }
    }

    void enterArray2(){
        for(int i=0; i<sizeB; i++) {
            cin >> B[i];
        }
    }

    void printWithCommonElements(){
        for(int i=0; i<sizeA; i++){
            C[i] = A[i];
            newsize++;
        }
        for(int i=0; i<sizeB; i++){
            C[newsize++] = B[i];
        }
        insertionSort();
        printArray();
    }

    void printWithoutCommonElements(){
        for(int i=0; i<sizeA; i++){
            C[i] = A[i];
            newsize++;
        }

        bool isMatche ;
        for(int i=0; i<sizeB; i++){
            isMatche = false;
            for(int j=0; j<sizeA; j++){
                if(B[i]==A[j]){
                    isMatche = true;
                    break;
                }
            }
            if(!isMatche){
                C[newsize++] = B[i];
            }
        }
        insertionSort();
        printArray();
    }

};


#endif //INC_8_COMBINING_THE_ARRAY_ARRAYSOPERATION_H
