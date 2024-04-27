#include <iostream>
#include <conio.h>
#include "Stack.h"

using namespace std;

int main() {
    system("cls");
    Stack s[3];
    int disks;
    int stack_number;
    int option;
    int value=0;

    cout<<"Enter initial number of disks : ";
    cin>>disks;

    for(int i=0; i<disks; ++i){
        s[0].push(disks-i);
    }

    while(true){
        system("cls");
        cout<<"---------------------------------------------------"<<endl;
        cout<<"Stack 1 : ";
        s[0].printAll();
        cout<<"---------------------------------------------------"<<endl;
        cout<<"Stack 2 : ";
        s[1].printAll();
        cout<<"---------------------------------------------------"<<endl;
        cout<<"Stack 3 : ";
        s[2].printAll();
        cout<<"---------------------------------------------------"<<endl;

        cout<<"\n\n";
        cout<<"Options to do :_ "<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"0. Exit "<<endl;
        cout<<"2. Pop and Push "<<endl;
        cout<<"------------------------------------------"<<endl;
        cout<<"Enter your option to do : ";
        cin>>option;

        switch (option) {
            case 0:
                exit(0);

            case 1:
                cout<<"Stack Number To Pop : ";
                cin>>stack_number;
                if(stack_number>0 && stack_number<4){
                    s[stack_number-1].pop(value);
                }
                else {
                    break;
                }
                cout<<"Stack Number To Push : ";
                cin>>stack_number;
                if(stack_number>0 && stack_number<4){
                    s[stack_number-1].push(value);
                }
                break;

            default:
                break;
        }
    }
}
