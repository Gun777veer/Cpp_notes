#include<bits/stdc++.h>
using namespace std;

//  OBJECTS AND CLASSES

// class car{ // by default the class will be private
//     private:
//     int model;
//     protected: // can be accessed by inherited or friend class
//         string color;
//     public:
//     float cost;
//     void input(int a, string b){
//         model=a;
//         color=b;
//     }
//     void display();
//     friend class car1; // friend class can access data members of the private and public
// };

// class car1{
//     public:
//     void input(car &t){ // we need to make change at the address
//         cin>>t.model>>t.color;
//     }
//     void display(car &t){
//         cout<<"model = "<<t.model<<endl<<"color = "<<t.color;
//     }
// };

// void car :: display(){  //scope resolution operator
//         cout<<endl<<model<<endl<<color;
//     }

// int main(){

//     car c1;
//     car1 c2;
//     //c1.model=2022;
//     // c1.input(2020, "red");
//     // c1.cost=52.45;
//     // //c1.color="black";
//     // c1.display();

//     c2.input(c1);
//     c2.display(c1);
//     c1.display();

// }

//CONSTRUCTORS (constructor can not be inherited)

//default constructor

// class car{
//     private:
//     int model;
//     float cost;
//     string color;
//     public:
//     car(){ // constructor is same name as that of class
//         model = 2022;
//         cost=34.5;
//         color = "red";
//     }
//     void display();
// };

// void car :: display(){
//     cout<<model<<endl<<cost<<endl;
// }

// int main(){

//     car c1; // default constructor is automatically called as soon as object is called it is always there in compiler library

//     c1.display();

// }

// Parameterised constructor

// class car{
//     private:
//     int model;
//     float cost;
//     string color;
//     public:
//     car(int m, float cos){
//         model=m;
//         cost=cos;
//     }
//     void display();
// };

// void car :: display(){
//     cout<<model<<endl<<cost<<endl;
// }

// int main(){

//     car c1(2020, 53.3);

//     c1.display();

// }

// Copy constructor

// class car{
//     private:
//     int model;
//     float cost;
//     string color;
//     public:
//     car(int m, int c){ // constructor is same name as that of class
//     model=m;
//     cost=c;
//     }
//     car(car &t){ // copy constructor
//     model=t.model;
//     cost=t.cost;
//     }
//     void display();
// };



// void car :: display(){
//     cout<<model<<endl<<cost<<endl;
// }

// int main(){

//     car c1(1,2);
//     car c2=c1;

//     c1.display();

// }


// Dynamic constructor

// dynamic memory allocation can be done using new

// class car{
//     private:
//     int model;
//     float cost;
//     string *color;
//     public:
//     car(){
//         color=new string("Hello");
//     }
//     void display();
// };

// void car :: display(){
//     cout<<*color<<endl;
// }

// int main(){

//     car c1;

//     c1.display();

// }

// Destructor

class car{
    private:
    int model;
    float cost;
    string *color;
    public:
    car(){
        color=new string("Hello");
    }
    ~car(){ // will free the space which was given to objects after main
        cout<<"destructor";
    }
    void display();
};

void car :: display(){
    cout<<color<<endl; //will print the address
    cout<<*color<<endl; //will print the value

}

int main(){

    car c1;

    c1.display();

}


