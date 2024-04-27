#include <iostream>
#include <conio.h>
#include "Random.h"

using namespace std;

int main() {
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;

    Random r(size);
    cout<<"\nRandomly generated, every index is assigned by a unique element. "<<endl;
    r.printMethod1();
    cout<<"\nRandomly generated, once a index assigned by a value will not changed"<<endl;
    r.printMethod2();

    getch();
    return 0;
}
