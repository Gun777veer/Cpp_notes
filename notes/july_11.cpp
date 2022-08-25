#include<iostream>
using namespace std;

#define pi 3.14

int main(){

   //BITWISE OPERATOR

   /*int a{0b1010};

   int b{0721};

   int c{28};

   int d{0xFF};

   //cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;

   int e{0b1111};

   int f = a&b;

   //NEGATE BITWISE OPERATOR

   cout<<(~e)<<endl;

   //cout<<f;*/

   //LEFT SHIFT BITWISE OPERATORS

   //int a{0b1010}; decimal is 10 therefore ans will be 20 (a*2)
   //cout<<(a<<1)<<endl;

   //RIGHT SHIFT BITWISE OPERATORS

   //int a{0b1010}; decimal is 10 therefore ans will be 5 (a/2)
   //cout<<(a>>1)<<endl;

   //ASSIGNMENT OPERATOR

   /*int a = 1;

   int b = 2;

   cout<<(a+=b); //a=a+b
   c = (a>b) ? true:false;
   cout<<c<<endl; // 0 is false 1  if true */
   /*
   int a=1;
   int b=2;
   (a>b) ? cout<<"hi" : cout<<"hello";
   */
  /*int a;
  int b;

  if(a>b){
    cout<<"a is greater that b";
  }
  else if(a==b){
    cout<<"a is equal to b";
  }
  else{
    cout<<"b is greater than a";
  }*/
  //write a program to find out if a no. is even or odd

  int a;
  cin>>a;

  if(a%2==0){
    cout<<"a is even\n";
  }
  else{
    cout<<"a is odd\n";
  }

  //write a program to find whether a year is leap

  int year;
  cin>>year;

  if(year%400==0){
    cout<<"It is leap year"<<endl;
  }
  else if(year%100==0){
    cout<<"Not a leap year"<<endl;
  }
  else if(year%4==0){
    cout<<"Is a leap year"<<endl;
  }
  else{
      cout<<"Not a leap year"<<endl;
  }

  //find the total salary of an employee if the basic salary is within the following range basic <= 5000 HRA 2% of bs if salary is <=10000 hra of 3% of basic salary if the salary is bs<=15000 3% of bs if the salary is  > 15000 is 4% of bs

  float salary, hra, da, ts;
  cin>>salary;

  if(salary<=5000){
    hra=salary*0.02;
    da=salary*0.02;
  }
  else if(salary<=10000){
    hra=salary*0.03;
    da=salary*0.03;
  }
  else if(salary<=15000){
    hra=salary*0.03;
    da=salary*(3.5/100);
  }
    else if(salary>15000){
    hra=salary*0.04;
    da=salary*(4.5/100);
  }

  cout<<"Total: "<<(salary+hra+da)<<endl;

  //find the greatest of 3 no.

  int a1,b1,c1;

  cin>>a1>>b1>>c1;

  (a1>b1) ? ((a1>c1) ? cout<<a1<<"a1 is greater" : cout<<c1<<"c1 is greatest") : ((b1>c1) ? cout<<b1<<"b1 is greater" : cout<<c1<<"c1 is greatest");//ternary operator is short hand of if/ else

  if(a1>b1){
    if(a1>c1){
        cout<<"a1 is greatest";
    }
    else{
        cout<<"c1 is greatest";
    }
  }
  else{
    if(b1>c1){
        cout<<"b1 is greatest";
    }
    else{
        cout<<"c1 is greatest";
    }
  }

    return 0;
}