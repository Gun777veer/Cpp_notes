
#include<iostream>
   using namespace std;

//inheritance

// class base{ // parent class

//     private:
//     int age;
//     protected:
//     int roll_no;
//     public:
//     int age1;
//     string name;

// };

//private data won't be accessed by derived class
/*
base_class  private   public      protected

private     not       not         not
            accessed  accessed    accessed

public      private   public      protected

protected   private   protected   protected
*/

// class derived:public base //class derived:access_specifier base
// {

//     private:
//     string email;
//     public:
//     void input(){
//         cin>>roll_no;
//         cout<<roll_no;
//     }

// };


// int main(){

//     derived d1;

//     d1.input();

//     return 0;

// }

//Multilevel inheritance

// class base{ // parent class

//     private:
//     int age;
//     protected:
//     int roll_no;
//     public:
//     int age1;
//     string name;

// };

// class derived:private base //class derived:access_specifier base
// {

//     private:
//     string email;
//     public:
//     char sex;
//     string name;
//     void input(){
//         cin>>roll_no;
//         cin>>email;
//     }

//     void display(){
//         cout<<roll_no<<"\n";
//         cout<<email<<"\n";
//     }

// };

// //a derives b, b derives c therefore a derives c (transitive property)

// class derived1:public derived{

//     public:
//     float masks;

//     void input1(){
//         cin>>sex;
//         cin>>masks;
//         cin>>name;

//     
//     void display1(){
//         cout<<sex<<"\n";
//         cout<<masks<<"\n";
//         cout<<name<<"\n";
//     }

// };


// int main(){

//     derived1 d1;

//     d1.input1();

//     d1.display1();

//     return 0;

// }


//Multiple inheritance

// class base{ // parent class

//     private:
//     int age=1;
//     protected:
//     int roll_no=2;
//     public:
//     string name='gunveer';
//     void fun1(){
//         cout<<age<<"\n";
//         cout<<roll_no<<"\n";
//         cout<<name<<"\n";
//     }

// };

// class base1{ // parent class

//     private:
//     int phone=3;
//     protected:
//     int birth=4;
//     public:
//     string som="Hey";
//         void fun1(){
//         cout<<phone<<"\n";
//         cout<<birth<<"\n";
//         cout<<som<<"\n";
//     }

// };

// // if same function is in both base classes it will give note: member found by ambiguous name lookup

// class derived:public base,base1{

// }

// int main(){

//     derived d1;
//     d1.fun1();

// }

//Hierarehical inheritance

//tree structure

// class root{

//     private:
//     int a = 10;

// };

// class base:public root{ // parent class

//     private:
//     int age=1;
//     int roll_no=2;
//     public:
//     string name='gunveer';
//     void fun(){
//         cout<<age<<"\n";
//         cout<<roll_no<<"\n";
//         cout<<name<<"\n";
//     }

// };

// class base1:public root{ // parent class

//     protected:
//     int birth=4;
//         int phone=3;
//     public:
//     string som="Hey";
//         void fun1(){
//         cout<<phone<<"\n";
//         cout<<birth<<"\n";
//         cout<<som<<"\n";
//     }

// };

// // if same function is in both base classes it will give note: member found by ambiguous name lookup

// class derived:public base,base1{

// }

// int main(){

//     derived d1;

//     d1.fun1();

// }

//hybrid inheritance


// int i=1;

// int sum=0;

// class car{
//     public:
//     car(){
//         sum=i++;
//     }
//     ~car(){ // will free the space which was given to objects after main
//         cout<<(sum%10);
//     }
// };


// int main(){

//     car c1;
//     car c2;
//     car c3;
//     car c4;



// }

//find the union and intersection of two sorted arrays
//write a program to merge two sorted arrays
//move all the negative element to one side
//find if there is any sub array with the sum = 0


int main(){

    // int n,n1;
    // cin>>n>>n1;

    // int arr[n];
    // int arr1[n1];

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // for(int i=0; i<n1; i++){
    //     cin>>arr1[i];
    // }
    // int n2=n+n1;

    // int arr2[n2];
    // int c=0;


    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n1; j++){
    //         if(arr[i]==arr1[j]){
    //             arr2[c]=arr[i];
    //             c++;
    //         }
    //     }
    // }

    // for(int i=0; i<c; i++){
    //     cout<<arr2[i]<<" ";
    // }




}

