#include <iostream>
#include <conio.h>
#include "ArrayDupication.h"
#include <map>

using namespace std;

ArrayDupication *ad;
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
                ad = new ArrayDupication(size);
                cout<<"\nRandomly generated array elements : "<<endl;
                ad->printArray();
                cout<<"\nElements that repeated along with their number of frequencies : "<<endl;
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
                ad = new ArrayDupication(A, size);
                cout<<"\nRandomly generated array elements : "<<endl;
                ad->printArray();
                cout<<"\nElements that repeated along with their number of frequencies : "<<endl;
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



















//int main()
//{
//    int arr[] = {5,23,4,6,23,6,2,34,6,7,
//                 4,3,63,2,12,6,3,5346,
//                 82,53,14,7,53,16,34,14,7,7};
//    int size = sizeof(arr)/sizeof(int);
//
//    map<int, int> freq ;
//    int counter;
//
//    for(int i : arr) {
//        if(freq.find(i)!=freq.end()){       // value found
//            ++freq[i];
//        }
//        else {
//            freq[i] = 1 ;
//        }
//    }
//
//    for(int i : arr){
//        cout<<i<<" ";
//    }
//    cout<<endl;
//
//    for(auto key : freq) {
//        if(key.second != 1)
//            cout<<"Number : "<<key.first<<" , Frequency : "<<key.second<<endl;
//    }
//
//
//    return 0;
//}
