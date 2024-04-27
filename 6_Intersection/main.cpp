#include <iostream>
#include "ArrayOperation.h"

using namespace std;

int main() {
    int size_A, size_B;
    cout<<"Enter the size of array 1 : ";
    cin>>size_A;
    cout<<"Enter the size of array 2 : ";
    cin>>size_B;

    ArrayOperation ao(size_A, size_B);
    ao.printBothArray();
    cout<<"Common elements of both array having random elements : "<<endl;
    bool c = ao.printIntersection();

    !c ? cout<<"Not any common element. "<<endl : cout<<endl ;

    return 0;
}
