//
// Created by Administrator on 12/14/2022.
//

#ifndef INC_11_GENERAL_DS_LINKEDLIST_H
#define INC_11_GENERAL_DS_LINKEDLIST_H

#include <iostream>
#include <conio.h>
#include "Node.h"

using namespace std;

class LinkedList {
private:
    Node *start, *cur, *last, *temp;
    int count;

public:
    LinkedList(){
        start = NULL;
        count=0;
    }

    void insertLast(int x){
        cur = new Node(x);
        if(start==NULL){
            start = last = cur;
        }
        else {
            last->setNext(cur);
            last = cur;
        }
        count++;
    }

    void insertFirst(int x){
        cur = new Node(x);
        cur->setNext(start);
        start = cur;
        count++;
    }

    bool insertBefore(int x, int pos){
        cur = start;
        for(int i=1; i<pos-1; i++){
            cur=cur->getNext();
            if(cur==NULL){
                cout<<"Invalid Position\n";
                return false;
            }
        }
        temp = new Node(x);
        temp->setNext(cur->getNext()) ;
        cur->setNext(temp);
        return true;
    }

    bool find(int val){
        cur = start;
        while(cur->getNext()!=NULL){
            if(cur->getData() == val){
                return true;
            }
            cur->setNext(cur->getNext());
        }
        return false;
    }

    bool update(int oldval, int newval){
        cur = start;
        while(cur->getNext()!=NULL){
            if(cur->getData() == oldval){
                cur->setData(newval);
                return true;
            }
            cur->setNext(cur->getNext());
        }
        return false;
    }

    bool remove(int val){
        cur = temp = start;

        while(cur->getNext()!=NULL){
            if(cur->getData() == val){
                temp->setNext(cur->getNext());
                delete cur;
                count--;
                return true;
            }
            temp = cur;
            cur->setNext(cur->getNext());
        }
        return false;
    }

    bool removeFirst(){
        if(start==NULL)
            return false;

        cur = start;
        start->setNext(cur->getNext());
        delete cur;
        count--;
        return true;
    }

    bool removeLast(){
        if(start==NULL){
            return false;
        }
        cur = temp = start;

        while(true){
            if(cur->getNext()==NULL){
                temp->setNext(0);
                delete cur;
                count--;
                break;
            }
            temp = cur;
            cur->setNext(cur->getNext());
        }
        return true;
    }

    void printAll(){
        cur = start;
        while(cur->getNext()!=NULL)
        {
            cout<<cur->getData()<<" ";
            cur->setNext(cur->getNext());
        }
        cout<<cur->getData()<<endl;
    }

    int size(){
        return count;
    }
};


#endif //INC_11_GENERAL_DS_LINKEDLIST_H
