//
// Created by Administrator on 12/4/2022.
//

#ifndef INC_1_SORTING_COMPARISON_SORTING_H
#define INC_1_SORTING_COMPARISON_SORTING_H

/*
    Header Files
*/
#include "iostream"
#include "unistd.h"
#include "ctime"

using namespace std;

class Sorting {
private:
    /*
     * Private Members
     * */
    int *Arr ;
    int size;
    int external_loop_count;
    int internal_loop_count;
    int number_of_comparison;
    int swaps;
    int shifts;

    /*
     * Private Functions
     * */
    void copyElements(int param[]){
        for(int i=0; i<size; i++){
            param[i] = Arr[i];
        }
        external_loop_count = internal_loop_count = number_of_comparison = swaps = shifts = 0;
    }

    void printDetail(){
        cout<<"\n";
        cout<<"Iteration of External Loop : "<<external_loop_count<<endl;
        cout<<"Iteration of Internal Loop : "<<internal_loop_count<<endl;
        cout<<"No. of Comparisons : "<<number_of_comparison<<endl;
        cout<<"No. of times values swapped : "<<swaps<<endl;
        cout<<"No. of times values shifted : "<<shifts<<endl;
        cout<<"\n";
    }

public:
    Sorting(int size){
        this->size = size;
        Arr = new int[size];

        putRandomNumber(Arr);
    }
    ~Sorting(){}

    void bubbleSort(int A[])
    {
        copyElements(A);
        for(int i=0; i<size-1; i++){
            bool isSorted = true;
            external_loop_count++;
            for(int j=0; j<size-i-1; j++){
                internal_loop_count++;
                number_of_comparison++;
                if(A[j]>A[j+1]){
                    swaps++;
                    int temp = A[j];
                    A[j] = A[j+1];
                    A[j+1] = temp;
                    isSorted = false;
                }
            }
            if(isSorted){
                break;
            }
        }
        cout<<"----------------------------Bubble Sort----------------------------"<<endl;
        printDetail();
    }

    void selectionSort(int A[])
    {
        copyElements(A);
        for(int i=0; i<size-1; i++)
        {
            external_loop_count++;
            bool notSorted = false;
            int min = A[i];
            int min_index;
            for(int j=i+1; j<size ;j++)
            {
                internal_loop_count++;
                if(A[j]<min)
                {
                    min=A[j];
                    min_index=j;
                    notSorted = true;
                }
            }
            number_of_comparison++;
            if(notSorted)
            {
                swaps++;
                int temp=A[i];
                A[i]=min;
                A[min_index]=temp;
            }
        }
        cout<<"----------------------------Selection Sort----------------------------"<<endl;
        printDetail();
    }

    void insertionSort(int A[])
    {
        copyElements(A);
        for(int i=1; i<size; i++){
            external_loop_count++;
            int j=i-1;
            int k = A[i];
            while(j>=0 && A[j]>k){
                number_of_comparison++;
                internal_loop_count++;
                shifts++;
                A[j+1] = A[j];
                j--;
            }
            A[j+1] = k;
        }
        cout<<"----------------------------Insertion Sort----------------------------"<<endl;
        printDetail();
    }

    void putRandomNumber(int arr[]){
        srand(time(0));
        for(int i=0; i<size; i++){
            arr[i] = 1 + rand();
        }
    }

    void printArr(){
        for(int i=0; i<size; i++){
            cout<<Arr[i]<<" ";
        }
        cout<<"\n\n";
    }

    void printArr(int A[]){
        for(int i=0; i<size; i++){
            cout<<A[i]<<" ";
        }
        cout<<"\n\n";
    }

};


#endif //INC_1_SORTING_COMPARISON_SORTING_H
