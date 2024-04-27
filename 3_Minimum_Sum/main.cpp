#include <iostream>
#include <conio.h>
#include "Arr_Operation.h"

using namespace std;

// Important To Implement
Arr_Operation *aop;
int size;
int *A;
char option;

int main()
{
    cout<<"Enter the size of array : ";
    cin>>size;

    int arr[size];
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    aop = new Arr_Operation(arr, size);

    cout<<"Minimum sum in the array : "<<aop->minimumSum()<<endl;

    getch();
    return 0;
}