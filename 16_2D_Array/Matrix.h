//
// Created by Nofil on 12/15/2022.
//

/*
 * Input -
 * Output -
 * Addition -
 * Subtraction -
 * Multiplication -
 * Transpose -
 * Determinant -
 * Square -
 * Non-Square -
 * Upper Triangle -
 * Lower Triangle -
 * Singular -
 * Non-Singular -
 * Symmetric -
 * Skew symmetric -
 * Comparison -
 * Associativity
 * Commutativity
 * Distributive
 * */

#ifndef INC_16_2D_ARRAY_MATRIX_H
#define INC_16_2D_ARRAY_MATRIX_H

#include <iostream>

using namespace std;

class Matrix {
    int **A;
    int **B;
    int **product;
    int **trnsps;
    int row1, row2, col1, col2; // m--->row , n---->column
    bool result;

    void printTranspose(int row, int col){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout<<trnsps[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void printProduct(int row, int col){
        for(int i=0; i<row; i++){
            for(int j=0; j<col; j++){
                cout<<product[i][j]<<" ";
            }
            cout<<endl;
        }
    }

public:
    Matrix(){

    }

    void setRowColumn(int r1, int c1, int r2, int c2){
        A = new int*[r1];
        for(int i=0; i<c1; i++){
            A[i] = new int[c1];
        }
        B = new int*[r2];
        for(int i=0; i<c2; i++){
            B[i] = new int[c2];
        }
        this->row1 = r1;
        this->col1 = c1;
        this->row2 = r2;
        this->col2 = c2;
    }

    void setRowColumn(int r1, int c1){
        A = new int*[r1];
        for(int i=0; i<c1; i++){
            A[i] = new int[c1];
        }
        this->row1 = r1;
        this->col1 = c1;
    }

    void setArray1(){
        for(int i=0; i<row1; i++){
            for(int j=0; j<col1; j++){
                cin>>A[i][j];
            }
            cout<<endl;
        }
    }

    void setArray2(){
        for(int i=0; i<row2; i++){
            for(int j=0; j<col2; j++){
                cin>>B[i][j];
            }
            cout<<endl;
        }
    }

    void getArray1(){
        for(int i=0; i<row1; i++){
            for(int j=0; j<col1; j++){
                cout<<A[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    void getArray2(){
        for(int i=0; i<row2; i++){
            for(int j=0; j<col2; j++){
                cout<<B[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    bool addition(){
        if(!(row1==row2 && col2==col1)){
            return false;
        }
        for(int i=0; i<row1; i++){
            for(int j=0; j<col2; j++){
                cout<<A[i][j]+B[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    bool subtraction(){
        if(!(row1==row2 && col2==col1)){
            return false;
        }
        for(int i=0; i<row1; i++){
            for(int j=0; j<col2; j++){
                cout<<A[i][j]-B[i][j]<<" ";
            }
            cout<<endl;
        }
        return true;
    }

    bool transpose(int array_number){
        int r,c;
        switch (array_number) {
            case 1:
                // Transpose Matrix Declaration
                trnsps = new int*[col1];
                for(int i=0; i<row1; i++){
                    trnsps[i] = new int[row1];
                }
                // Converting to transpose (changing rows to column or vice versa)
                for(int j=0; j<col1; j++){
                    for(int i=0; i<row1; i++){
                        trnsps[i][j] = A[j][i];
                    }
                }
                r=col1;
                c=row1;
                break;

            case 2:
                // Transpose Matrix Declaration
                trnsps = new int*[col2];
                for(int i=0; i<row2; i++){
                    trnsps[i] = new int[row2];
                }
                // Converting to transpose (changing rows to column or vice versa)
                for(int j=0; j<col2; j++){
                    for(int i=0; i<row2; i++){
                        trnsps[i][j] = A[j][i];
                    }
                }
                r=col2;
                c=row2;
                break;

            default:
                return false;
        }
        printTranspose(r,c);
        return true;
    }

    bool determinant(int array_number, int &det){
        switch (array_number) {
            case 1:
                if(row1!=col1 || row1>3 || col1>3)
                    return false;

                if(row1==2 && col1==2){
                    int r=1, l=1;
                    for(int i=0; i<row1; i++){
                        for(int j=0; j<col1; j++){
                           if(i==j)
                               l *= A[i][j];
                           else
                               r *= A[i][j];
                        }
                    }
                    det = l-r;
                }
                else if(row1==3 && col2==3){

                }
                break;

            case 2:
                if(row2!=col2 || row2>3 || col2>3)
                    return false;

                if(row2==2 && col2==2){
                    int r=1, l=1;
                    for(int i=0; i<row2; i++){
                        for(int j=0; j<col2; j++){
                            if(i==j)
                                l *= B[i][j];
                            else
                                r *= B[i][j];
                        }
                    }
                }
                else if(row1==3 && col2==3){

                }
                break;

            default:
                return false;
        }
        return true;
    }

    bool multiplication(){
        if(!(col1 == row2))
            return false;

        // Product matrix
        product = new int*[row1];
        for(int i=0; i<col2; i++){
            product[i] = new int[col2];
        }

        // Processing to get product
        for(int i=0; i<row1; i++){
            for(int j=0; j<row2; j++){
                for(int k=0; k<col1; k++){
                    product[i][j] += A[i][k]*B[k][j];
                }
            }
        }

        printProduct(row1, col2);
    }

    bool isSquare(int array_number){
        switch (array_number) {
            case 1:
                if(row1 == col1)
                    return true;

            case 2:
                if(row2 == col2)
                    return true;

            default:
                break;
        }
        return false;
    }

    bool upperTriangle(int array_number){
        switch (array_number) {
            case 1:
                if(!isSquare(array_number)){
                    return false;
                }

                for(int i=0; i<row1; i++){
                    for(int j=0; j<=i; j++){
                        if(A[i]!=0)
                            return false;
                    }
                }

            case 2:
                if(!isSquare(array_number)){
                    return false;
                }

                for(int i=0; i<row2; i++){
                    for(int j=0; j<=i; j++){
                        if(B[i]!=0)
                            return false;
                    }
                }

            default:
                break;
        }
        return false;
    }

    bool lowerTriangle(int array_number){
        switch (array_number) {
            case 1:
                if(!isSquare(array_number)){
                    return false;
                }

                for(int i=0; i<row1; i++){
                    for(int j=i; j<col1; j++){
                        if(A[i]!=0)
                            return false;
                    }
                }

            case 2:
                if(!isSquare(array_number)){
                    return false;
                }

                for(int i=0; i<row2; i++){
                    for(int j=i; j<col2; j++){
                        if(B[i]!=0)
                            return false;
                    }
                }

            default:
                break;
        }
        return false;
    }

    bool isNullMatrix(int array_number){
        switch (array_number) {
            case 1:
                for(int i=0; i<row1; i++){
                    for(int j=0; j<col1; j++){
                        if(A[i]!=0)
                            return false;
                    }
                }
                break;

            case 2:
                for(int i=0; i<row2; i++){
                    for(int j=0; j<col2; j++){
                        if(B[i]!=0)
                            return false;
                    }
                }
                break;

            default:
                return false;
        }
        return true;
    }

    bool isSingular(int array_number){
        int x;
        determinant(array_number, x);
        return !x;
    }

    bool equality(){
        if(!equality())
            return false;

        for(int i=0; i<row1; i++){
            for(int j=0; j<col2; j++){
                if(A[i][j]!=B[i][j])
                    return false;
            }
        }
        return true;
    }

    bool approximateEquality(){
        return (row1==row2 && col1==col2);
    }

    bool isSymmetric(int array_number){
        if(!isSquare(array_number)){
            return false;
        }
        transpose(array_number);
        for(int i=0; i<row1; i++){
            for(int j=0; j<col1; j++){
                if(A[i][j]!=trnsps[i][j])
                    return false;
            }
        }
    }
};


#endif //INC_16_2D_ARRAY_MATRIX_H
