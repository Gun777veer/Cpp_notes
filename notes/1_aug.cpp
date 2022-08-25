#include<bits/stdc++.h>
using namespace std;

//FUNCTION OVERRIDING

// class base{

//     public:
//     void display(){
//         cout<<"display of base"<<"\n";
//     }
// };

// class derived:public base{
//     public:
//     void display(){ // this display function overrides the definition of display in base class
//     //there is no ambiguity like in multiple inheritance
//         cout<<"hello"<<"\n";
//     }
// };

// int main(){

//     derived d1;

//     d1.display();

//     d1.base::display(); // this will call the display of base

//     return 0;

// }

//it will also work in the case of multiple inheritance


// class base{ // parent class

//     public:
//     void fun1(){
//         cout<<"age"<<"\n";
//     }

// };

// class base1{ // parent class


//     public:

//         void fun1(){
//         cout<<"hey"<<"\n";
//     }

// };

// // if same function is in both base classes it will give note: member found by ambiguous name lookup

// class derived:public base,base1{

// };

// int main(){

//     derived d1;
//     derived d2;
//     //d1.fun1();
//     d1.base::fun1(); // it won't give error ambiguity will be resolved

// }


//polymorphism (you are giving a new functionality to the same name)

//two types:-
//1. compile time(fn overloading, operator overloading)
//2. run time(virtual fn)

// function overloading

// class overload{
//     public:

// void add(int a, int b){
//     cout<<(a+b)<<"\n";
// }
// void add(float a, int b){
//     cout<<(a+b)<<"\n";
// }
// void add(float a, float b){
//     cout<<(a+b)<<"\n";
// }
// void add(int a, int b, int c){
//     cout<<(a+b+c)<<"\n";
// }


// };

// int main(){

//     overload f1;

//     f1.add(3,2);
//     f1.add(3.2f,2); //when you are passing an argument it will treat it as a double
//     f1.add(3.2f,2.2f);
//     f1.add(3,2,1);


//     return 0;
// }

//OPERATOR OVERLOADING

// five operators that can't overloaded:- .(member access), *(pointer), sizeof,  ::(scope resolution), ?(conditional/turnery)

// class op_ov{
//     private:
//     int real;
//     int image;

//     public:
//     op_ov(){
//          real=0;
//          image=0;
//     }
//     op_ov(int r1, int i1){
//         real=r1;
//         image=i1;
//     }
//     op_ov operator+(op_ov o1){
//     op_ov o2;

//     o2.real=real+o1.real;
//     o2.image=image+o1.real;

//         return o2;

//     }
//     void display(){
//         cout<<real<<endl<<image;
//     }

// };



// int main(){

//     op_ov o3(2,3);

//     op_ov o4(2,2);

//     op_ov o5;

//     o5=o3+o4;

//     o5.display();

//     return 0;

// }


// class op_ov{
//     private:
//     int a;

//     public:
//     op_ov(){
//         a=0;
//     }

//      void operator++(){
//         a++;
//     }

//     void operator--(){
//         a--;
//     }

//     void display(){
//         cout<<a<<endl;
//     }

// };



// int main(){

//     op_ov o3;

//     ++o3;

//     o3.display();

//     --o3;

//     o3.display();

//     return 0;

// }


// Run time Polymorphism

class base
{
    public:
    void display(){
        cout<<"Display of base"<<endl;
    }
};

class der:public base{
    public:
    virtual void display(){
        cout<<"display of derived";
    }
};

int main(){
    base b1;

    b1.display();

    der b2;

    b2.display();

    return 0;
}

// pure virtual function





