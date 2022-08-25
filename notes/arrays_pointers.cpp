#include<bits/stdc++.h>
using namespace std;

int main(){

    int a=10;
    cout<<&a<<"\n"; //this is the way to print the address of value a
    // pointer is like any other variable but instead of storing data it stores memory address
    int * b = &a; // here the datatype is the data type of the variable whose address the pointer is storing
    // instead the data type of pointers is always going to be an integer
    //double* b
    //float *
    // to change or print the value using pointer we use indirection operator (*)
    cout<<*b<<"\n"; // will print the value of a
    *b=20; // will change the value stored in a
    cout<<a<<"\n";

    //operations on pointers

    //increment operators

    char c="c";
    int * d = &c;

    cout<<b<<"\n";
    cout<<d<<"\n";

    b++; // because the int is of 4 bytes it will get incremented by 4 same with decrement operator
    d++; //

    cout<<b<<"\n";
    cout<<d<<"\n";

    // addition/subtraction of constants to operators

    b+2; // here the value of b will be incremented by 8 cause 2*the size of integer
    d+2;// while here the value of b will be incremented by 2 cause 2*the size of char

}

//priority of the operators

// postfix increment > prefix increment/decrement = dereference