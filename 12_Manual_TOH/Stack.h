//
// Created by Administrator on 12/14/2022.
//

#ifndef INC_12_MANUAL_TOH_STACK_H
#define INC_12_MANUAL_TOH_STACK_H

#include <iostream>

class Stack {
private:
    int *A, top, max_size;

public:
    Stack(int size=10){
        A = new int[size];
        top=0;
        this->max_size = size;
        //std::cout<<"Launching our 10 sized stack"<<std::endl;
    }

    ~Stack(){
        std::cout<<"Hope this DS solved your problem"<<std::endl;
    }

    bool isFull(){
        return top>=max_size;
    }

    bool isEmpty(){
        return !top;
    }

    bool push(int x){
        if(!isFull()){
            A[top++] = x;
            return true;
        }
        return false;
    }

    bool pop(){
        if(!isEmpty()){
            top--;
            return true;
        }
        return false;
    }

    bool pop(int &t){
        if(!isEmpty()){
            t = A[--top];
            return true;
        }
        return false;
    }

    bool peek(int &t){
        if(!isEmpty()){
            t = A[top-1];
            return true;
        }
        return false;
    }

    int peek(){
        if(!isEmpty()){
            return A[top-1];
        }
    }

    void printAll(){
        if(!isEmpty()){
            for (int i = 0; i<top ; ++i) {
                std::cout<<A[i]<<" ";
            }
            std::cout<<std::endl;
            return;
        }
        std::cout<<std::endl;
    }

    int size(){
        if(!isEmpty()){
            return top;
        }
        return -1;
    }
};


#endif //INC_12_MANUAL_TOH_STACK_H
