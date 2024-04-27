#include <iostream>
#include "ArrayOperations.h"

using namespace std;

int main() {
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    ArrayOperations ao(size);

    cout<<"Enter the elements in the array : "<<endl;
    ao.putElements();

    cout<<"\nMedian of given array : "<<ao.getMedian()<<"\n\n";

    cout<<"Elements of array after Median Process "<<endl;
    ao.medianLessGreat();

    return 0;
}
