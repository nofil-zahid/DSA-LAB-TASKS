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


    // Output

    cout<<"-------------------------------------------"<<endl;
    cout<<"1. Print with common elements : "<<endl;
    cout<<"2. Print without common elements : "<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"Enter your choice of output : ";
    char choice = getche() - 48;

    switch (choice) {
        case 1:
            cout<<"\nOutput of the array :_ "<<endl;
            ao.printWithCommonElements();
            break;

        case 2:
            cout<<"\nOutput of the array :_ "<<endl;
            ao.printWithoutCommonElements();
            break;

        default:
            exit(0);
    }

    return 0;
}
