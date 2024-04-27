#include <iostream>
#include "Matrix.h"
using namespace std;

Matrix m;
int x;
short i;
short option;
short r1, c1, r2, c2;
bool result;

int main() {

    while (true){
        i=0;
        system("cls");
        cout<<"-------------------------------------------------"<<endl;
        cout<<(i++)<<". Exit"<<endl;
        // Required Matrices : 2
        cout<<(i++)<<". Addition"<<endl;
        cout<<(i++)<<". Subtraction"<<endl;
        cout<<(i++)<<". Multiplication"<<endl;
        cout<<(i++)<<". Equality"<<endl;
        cout<<(i++)<<". Approximate Equality"<<endl;
        // Required Matrices  : 1
        cout<<(i++)<<". Transpose"<<endl;
        cout<<(i++)<<". Determinant"<<endl;
        cout<<(i++)<<". Is Square or not"<<endl;
        cout<<(i++)<<". Upper Triangle"<<endl;
        cout<<(i++)<<". Lower Triangle"<<endl;
        cout<<(i++)<<". Singular or Non-Singular"<<endl;
        cout<<(i++)<<". Symmetric or Skew-Symmetric"<<endl;
        cout<<(i++)<<". Null Matrix"<<endl;
        cout<<"-------------------------------------------------"<<endl;
        cout<<"Enter your operation : ";
        cin>>option;

        cout<<"--------------------------------------------------------------"<<endl;
        cout<<"Enter rows and columns of the matrices : ";
        cout<<"  -------------------------Matrix 1-------------------------"<<endl;
        cout<<"Row 1 : ";
        cin>>r1;
        cout<<"Column 1 : ";
        cin>>c1;
        cout<<"  -------------------------Matrix 2-------------------------"<<endl;
        cout<<"Row 2 : ";
        cin>>r2;
        cout<<"Column 2 : ";
        cin>>c2;
        cout<<"--------------------------------------------------------------"<<endl;
        if(option>=1 && option<=5){
            m.setRowColumn(r1, c1, r2, c2);
            cout<<"Enter the elements of array 1 : "<<endl;
            m.setArray1();
            cout<<"Enter the elements of array 2 : "<<endl;
            m.setArray2();
        }
        else if(option>5 && option<i){
            m.setRowColumn(r1, c1);
            cout<<"Enter the elements of array 1 : "<<endl;
            m.setArray1();
        }

        switch (option) {
            case 0:
                exit(0);
            case 1:
                cout<<"Sum of two entered arrays : ";
                result = m.addition();
                if(!result)
                    cout<<"Wrong in your rows or columns"<<endl;
                break;
            case 2:
                cout<<"Subtraction of two entered arrays : ";
                result = m.subtraction();
                if(!result)
                    cout<<"Wrong in your rows or columns"<<endl;
                break;
            case 3:
                cout<<"Multiplication of two entered arrays : ";
                result = m.multiplication();
                if(!result)
                    cout<<"Rows of first and Column of second may not equal or Invalid rows and columns"<<endl;
                break;
            case 4:
                cout<<"Equality of two entered arrays : ";
                result = m.equality();
                if(!result)
                    cout<<"All elements and rows and columns are equal"<<endl;
                break;
            case 5:
                cout<<"Approximate Equality of two entered arrays : ";
                result = m.approximateEquality();
                if(!result)
                    cout<<"Rows and columns of both arrays are equal"<<endl;
                break;
            case 6:
                cout<<"Transpose of given matrix : "<<endl;
                m.transpose(1);
                break;
            case 7:
                if(m.determinant(1,x))
                    cout<<"Determinant of given matrix : "<<x<<endl;
                else
                    cout<<"Determinant cannot be found"<<endl;
                break;
            case 8:
                if(m.isSquare(1))
                    cout<<"Entered matrix is square. \nNumber of rows and columns are equal. "<<endl;
                else
                    cout<<"Entered matrix is not square. \nNumber of rows and columns are not equal. "<<endl;
                break;
            case 9:
                if(m.upperTriangle(1))
                    cout<<"Yup. Given or entered matrix is upper triangular matrix"<<endl;
                else
                    cout<<"Nope. Given or entered matrix is not upper triangular matrix"<<endl;
                break;
            case 10:
                if(m.lowerTriangle(1))
                    cout<<"Yup. Given or entered matrix is lower triangular matrix"<<endl;
                else
                    cout<<"Nope. Given or entered matrix is not lower triangular matrix"<<endl;
                break;
            case 11:
                if(m.isSingular(1))
                    cout<<"Determinant of entered matrix is 0. So it is singular. "<<endl;
                else
                    cout<<"Determinant of entered matrix is not 0. So it is not singular. "<<endl;
                break;
            case 12:
                if(m.isSymmetric(1))
                    cout<<"Entered matrix is Symmetric Matrix. "<<endl;
                else
                    cout<<"Entered matrix is Skew Symmetric Matrix. "<<endl;
                break;
            case 13:
                if(m.isNullMatrix(1))
                    cout<<"Entered matrix is NUll Matrix as all the elements are zero. "<<endl;
                else
                    cout<<"Entered matrix is NUll Matrix as all the elements are not zero. "<<endl;

            default:
                continue;
        }
    }
}

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