//
// Created by Administrator on 12/8/2022.
//

#ifndef INC_7_ARRAYS_OVERLAP_INTERSECTION_ARRAYSOPERATION_H
#define INC_7_ARRAYS_OVERLAP_INTERSECTION_ARRAYSOPERATION_H

#include <iostream>

using namespace std;

class ArraysOperation {
private :
    int sizeA;
    int sizeB;
    int *A;
    int *B;
    int newsize ;

    void insert(int value, int index){
        for(int i=newsize-1; i>=index; --i){
            A[i+1] = A[i];
        }
        A[index] = value ;
        newsize++;
    }

public:
    ArraysOperation(int a, int b){
        newsize = sizeA = a;
        sizeB = b;
        A = new int[sizeA+sizeB];
        B = new int[sizeB];
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

    void overlapIntersection(){
        int c=0;
        for(int j=0; j<sizeB; j++){
            for(int i=c; i<sizeA; i++){
                if(B[j] == A[i]){
                    c++;
                    break;
                }
                if(B[j]<A[i]){
                    insert(B[j], i);
                    c++;
                    break;
                }
                c++;
            }
        }
    }

    void printArray(){
        for(int i=0; i<newsize; i++) {
            cout<<A[i]<<" ";
        }
        cout<<"\n";
    }
};


#endif //INC_7_ARRAYS_OVERLAP_INTERSECTION_ARRAYSOPERATION_H
