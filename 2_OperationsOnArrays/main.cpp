#include <iostream>
#include "ArraysOperations.h"

using namespace std;

int main() {
    int size ;
    cout<<"Enter the size of array to perform operations : ";
    cin>>size;
    ArraysOperations a_obj(size);

    int arr[] = {};
    a_obj.inputArray();

    cout<<"Random elements generated in Array are following :_ "<<endl;
    a_obj.printArray();

    cout<<"\nMean of the given random elements of array : "<<a_obj.mean()<<endl;
    cout<<"Median of the given random elements of array : "<<a_obj.median()<<endl;
    cout<<"Mode of the given random elements of array : "<<a_obj.mode()<<endl;
    cout<<"Max value in given random elements of array : "<<a_obj.max()<<endl;
    cout<<"Max value in given random elements of array : "<<a_obj.max(3)<<endl;
    cout<<"Max value in given random elements of array : "<<a_obj.max(5)<<endl;

    int a,b;
    bool state;
    while (true){
        // First Number
        cout<<"Enter first number : ";
        cin>>a;
        if(!a_obj.isPresent(a))
            continue;

        // Second Number
        cout<<"Enter second number : ";
        cin>>b;
        if(!a_obj.isPresent(a))
            continue;

        // Sum
        b+=a;
        cout<<"Is Sum Present : "<<bool(a_obj.isPresent(b))<<endl;
        break;
    }

    return 0;
}
