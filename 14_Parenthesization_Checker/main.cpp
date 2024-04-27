#include <iostream>
#include <conio.h>
#include "ParenthesizationChecker.h"

using namespace std;

string str;
bool result;
ParenthesizationChecker p;

int main() {
    cout<<"Enter the string having parentheses : ";
    getline(cin, str);

    result = p.checkParentheses(str);

    if(result){
        cout<<"Compiled Successfully"<<endl;
    }
    else {
        cout<<"Compilation Error"<<endl;
    }

    getch();
    return 0;
}
