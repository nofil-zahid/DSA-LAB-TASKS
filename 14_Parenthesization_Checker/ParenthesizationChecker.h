//
// Created by Administrator on 12/13/2022.
//

#ifndef INC_14_PARENTHESIZATION_CHECKER_PARENTHESIZATIONCHECKER_H
#define INC_14_PARENTHESIZATION_CHECKER_PARENTHESIZATIONCHECKER_H

#include <iostream>
#include <strings.h>
#include <stack>

using namespace std;

class ParenthesizationChecker {
    stack<char> s;

    char reverseOfCharacter(char ch){
        switch (ch) {
            case ')':
                return '(';
            case ']':
                return '[';
            case '}':
                return '{';

            default:
                return '*';
        }
    }

public:
    bool checkParentheses(string str){
        for(int i=0; i<str.length(); i++){
            switch (str[i]) {
                case '(':
                case '{':
                case '[':
                    s.push(str[i]);
                    break;

                case ')':
                case '}':
                case ']':
                    if(s.top() == reverseOfCharacter(str[i])){
                        s.pop();
                    }
                    break;

                default:
                    break;
            }
        }
        if(s.empty()){
            return true;
        }
        return false;
    }
};


#endif //INC_14_PARENTHESIZATION_CHECKER_PARENTHESIZATIONCHECKER_H
