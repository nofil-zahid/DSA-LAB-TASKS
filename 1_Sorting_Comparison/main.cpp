/*
 *  Header Files
 * */
#include <iostream>
#include <conio.h>
#include "Sorting.h"

/*
 * Namespace
 * */
using namespace std;

/*
 * Macros : Words for replacement
 * */
#define size_1M 1000000
#define size_100M 100000000
#define size_400M 400000000
#define size_1000M 1000000000

int main()
{
    system("cls");
    int size;
    cout<<"Select your array size option having random numbers :_ "<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"1. Array size of your choice "<<endl;
    cout<<"2. Array size of 1M "<<endl;
    cout<<"3. Array size of 100M "<<endl;
    cout<<"4. Array size of 400M "<<endl;
    cout<<"5. Array size of 1000M "<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"Enter your choice : ";
    char op = getche() - 48 ;

    switch(op){
        case 1:
        {
            system("cls");
            cout<<"Enter your array size : ";
            cin>>size;
            Sorting sort(size);
            int Arr[size];
            // Pre Sorted Random Number Generated Array
            cout<<"Elements in an array are following : "<<endl;
            sort.printArr();
            // All sorting techniques along with their details
            sort.bubbleSort(Arr);
            sort.selectionSort(Arr);
            sort.insertionSort(Arr);
            // Post Sorted Random Number Generated Array
            cout<<"Elements in an array after sorting : "<<endl;
            sort.printArr(Arr);
        }
            break;

        case 2:
        {
            system("cls");
            size = size_1M;
            Sorting sort(size);
            int Arr[size];
            sort.bubbleSort(Arr);
            sort.insertionSort(Arr);
            sort.selectionSort(Arr);
        }
            break;

        case 3:
        {
            system("cls");
            size = size_100M;
            Sorting sort(size);
            int Arr[size];
            sort.bubbleSort(Arr);
            sort.insertionSort(Arr);
            sort.selectionSort(Arr);
        }
            break;

        case 4:
        {
            system("cls");
            size = size_400M;
            Sorting sort(size);
            int Arr[size];
            sort.bubbleSort(Arr);
            sort.insertionSort(Arr);
            sort.selectionSort(Arr);
        }
            break;

        case 5:
        {
            system("cls");
            size = size_1000M;
            Sorting sort(size);
            int Arr[size];
            sort.bubbleSort(Arr);
            sort.insertionSort(Arr);
            sort.selectionSort(Arr);
        }
            break;

        default:
            system("cls");
            cout<<"Best of luck"<<endl;
    }
}
