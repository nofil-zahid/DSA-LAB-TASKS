#include <iostream>
#include <conio.h>
#include "ArraysOperation.h"

using namespace std;

int main() {
    int sizeA, sizeB;
    cout<<"Enter the size of Array 1 : ";
    cin>>sizeA;
    cout<<"Enter the size of Array 2 : ";
    cin>>sizeB;

    ArraysOperation ao(sizeA, sizeB);

    // Input
    cout<<"Enter the elements in "<<sizeA<<" sized array : "<<endl;
    ao.enterArray1();
    cout<<endl;
    cout<<"Enter the elements in "<<sizeB<<" sized array : "<<endl;
    ao.enterArray2();
    cout<<endl;

    // Processing
    ao.overlapIntersection();

    // Output
    cout<<"\nOutput of the array :_ "<<endl;
    ao.printArray();

    return 0;
}
