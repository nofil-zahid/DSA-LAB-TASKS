#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <ctime>
#include "StackSort.h"
using namespace std;

// Functions Declarations
void putRandom(int[], int);
void printArray(int[], int);

// Important
int s; // Size
char op; // option
StackSort *ss;

int main() {
    cout<<"Enter the size of the array : ";
    cin>>s;
    ss = new StackSort();

    int arr[s];
    putRandom(arr, s);
    cout<<"Randomly Generated Array : ";
    printArray(arr, s);

    cout<<"---------------------------------"<<endl;
    cout<<"1. Sort in Ascending Order "<<endl;
    cout<<"2. Sort in Descending Order "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"Enter your choice of sort : ";
    op = getche() - 48;

    cout<<"\n";
    if(op == 1){
        ss->sortAscendingly(arr, s);
    }
    else if(op == 2){
        ss->sortDescendingly(arr, s);
    }
    else {
        exit(0);
    }

    printArray(arr, s);

    getch();
    return 0;
}

// Functions Definitions
void putRandom(int a[], int size){
    srand(time(NULL));
    for(int i=0; i<size; i++){
        a[i] = 1+rand()%100;
    }
}

void printArray(int a[], int size){
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
