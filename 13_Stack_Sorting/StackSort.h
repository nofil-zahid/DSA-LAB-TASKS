//
// Created by Administrator on 12/18/2022.
//

#ifndef INC_13_STACK_SORTING_STACKSORT_H
#define INC_13_STACK_SORTING_STACKSORT_H

#include <iostream>
#include <stack>

using namespace std;

class StackSort {
    stack<int> stk;
    stack<int> temp_stack;
    int temp;

    void putInStack(int arr[], int s){
        for(int i=0; i<s; i++){
            stk.push(arr[i]);
        }
    }

    void putBack(int a[]){
        for(int i=0; !temp_stack.empty(); i++){
            a[i] = temp_stack.top();
            temp_stack.pop();
        }
    }

public:
    StackSort(){}

    void sortAscendingly(int array[], int size){
        putInStack(array, size); // putting in stk (stack)

        while(!stk.empty()){
            temp = stk.top();
            stk.pop();
            while(!temp_stack.empty() && temp>temp_stack.top()){
                stk.push(temp_stack.top());
                temp_stack.pop();
            }
            temp_stack.push(temp);
        }

        putBack(array);
    }

    void sortDescendingly(int array[], int size){
        putInStack(array, size); // putting in stk (stack)

        while(!stk.empty()){
            temp = stk.top();
            stk.pop();
            while(!temp_stack.empty() && temp<temp_stack.top()){
                stk.push(temp_stack.top());
                temp_stack.pop();
            }
            temp_stack.push(temp);
        }

        putBack(array);
    }
};


#endif //INC_13_STACK_SORTING_STACKSORT_H
