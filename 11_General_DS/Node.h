//
// Created by Administrator on 12/14/2022.
//

#ifndef INC_11_GENERAL_DS_NODE_H
#define INC_11_GENERAL_DS_NODE_H


class Node {
    int data;
    Node *next;

public:
    Node(int data){
        this->data = data;
        next = 0;
    }

    void setData(int data){
        this->data = data;
    }

    void setNext(Node* next){
        this->next = next;
    }

    int getData(){
        return data;
    }

    Node* getNext(){
        return next;
    }
};


#endif //INC_11_GENERAL_DS_NODE_H
