//
// Created by Administrator on 12/14/2022.
//

#ifndef INC_10_RANDOM_NUMBER_GENERATOR_RANDOM_H
#define INC_10_RANDOM_NUMBER_GENERATOR_RANDOM_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

class Random {
private :
    int *RandomNumbers;
    int *Indexes;
    int size;
    int value, index1, index2;

    bool isPresent(int arr[], int end, int val){
        for(int i=0; i<end; i++){
            if(arr[i] == val)
                return true;
        }
        return false;
    }

    // Method 1
    void generateRandomUniqueElements(){
        srand(time(NULL));
        for(int i=0; i<size; i++){
            while(true){
                value = 1+rand()%size;
                if(!isPresent(RandomNumbers, i, value)){
                    RandomNumbers[i] = value;
                    break;
                }
            }
        }
    }

    // Method 2
    void generateRandomUniqueIndexes(){
        srand(time(NULL));
        for(int i=0; i<size; i++){
            RandomNumbers[i] = 1+(rand()%size);
        }
        for(int i=0; i<sqrt(size); i++){
            swap(RandomNumbers[rand()%size], RandomNumbers[rand()%size]);
        }
    }

    void print(){
        for(int i=0; i<size; i++){
            cout<<RandomNumbers[i]<<" ";
        }
    }

    void clear(){
        for(int i=0; i<size; i++){
            RandomNumbers[i] = -1;
            Indexes[i] = -1;
        }
    }

public:
    Random(int size=10){
        RandomNumbers = new int[size];
        Indexes = new int[size];
        this->size = size;
    }

    void printMethod1(){
        generateRandomUniqueElements();
        print();
    }

    void printMethod2(){
        generateRandomUniqueIndexes();
        print();
    }
};


#endif //INC_10_RANDOM_NUMBER_GENERATOR_RANDOM_H
