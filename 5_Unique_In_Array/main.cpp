#include <iostream>
#include <conio.h>
#include "ArrayOperation.h"

using namespace std;

ArrayOperation *ad;
int size;
int *A;
char option;

int main()
{
    while(true)
    {
        cout<<"Options : "<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"0. Exit : "<<endl;
        cout<<"1. Enter size of array : "<<endl;
        cout<<"2. Enter size and array : "<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"Enter your option : ";
        option = getche() - 48;

        switch(option){
            case 0:
                exit(0);

            case 1:
                system("cls");
                cout<<"Enter the size of array : ";
                cin>>size;
                ad = new ArrayOperation(size);
                cout<<"\nRandomly generated array elements : "<<endl;
                ad->printArray();
                cout<<"\nUnique elements in the given array : "<<endl;
                ad->elementsFrquency();
                system("cls");
                break;

            case 2:
                system("cls");
                cout<<"Enter the size of array : ";
                cin>>size;
                A = new int[size];
                cout<<"Enter the elements of array : "<<endl;
                for(int i=0; i<size; i++){
                    cin>>A[i];
                }
                ad = new ArrayOperation(A, size);
                cout<<"\nElements of array : "<<endl;
                ad->printArray();
                cout<<"\nUnique elements in the given array : "<<endl;
                ad->elementsFrquency();
                getch();
                system("cls");
                break;

            default:
                cout<<"enter correct option. "<<endl;
                system("cls");

        }
    }
}