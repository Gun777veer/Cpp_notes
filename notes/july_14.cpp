#include<bits/stdc++.h>
using namespace std;

int main(){
    //DO WHILE
    /*
    int a = 5;
    do{
        cout<<"Hello";
        a--;
    }while(a>10);
    */

/*
   int a,b;
   cin>>a>>b;
   int gcd=1;

   int min = (a>b) ? a : b;

   for(int i=0; i<min; i++){
    if(a%i==0 && b%i==0){
        gcd = gcd*i;
    }
   }

   cout<<min<<endl;
   cout<<gcd;


}
*/

//to find a prime no.
/*
int a;
cin>>a;
bool b = true;

for(int i=2; i<=a/2; i++){    // more optimized way of dealing with this.
    if(a%i==0){
        b=false;
        break;
    }
    else{
        b=true;
    }
}
if(b==true){
    cout<<"is prime";
}
else{
    cout<<"is not prime";
}
*/

/*

float a;
a = 100;
printf("%1f", a); //
}

*/

//prime no b/w 20 to 200
/*
int count =0;
bool check = true;
for(int j=20; j<=200; j++){
for(int i=2; i<=j/2; i++){    // more optimized way of dealing with this.
    if(j%i==0){
        check = false;
    }
}
if(check==false){
    cout<<j<<" ";
    count++;
}
}
cout<<endl;
cout<<count;

}
*/

int n;
cin>>n;
/*
for(int i=1; i<n; i++){
    int count=1;
    for(int j=0; j<i; j++){
        cout<<count;
        count++;
    }
    cout<<endl;
}
*/
for(int i=n; i>1; i--){
    for(int j=i; j>1; j--){
        cout<<j;
    }
    cout<<endl;
}
for(int i=1; i<n+2; i++){
    for(int j=0; j<i; j++){
        cout<<i;
    }
    cout<<endl;
}
for(int i=n; i>1; i--){
    for(int j=i; j>0; j--){
        cout<<i;
    }
    cout<<endl;
}
for(int i = 0; i<n; i++){
    for(int j=0; j<n; j++){
    if(i==0 || i==n){
        cout<<"*";
    }
    else{
        cout<<" ";
    }
    }

}
//
}
//when you are clear with the initialization we go with for loop
//when you are not clear with the initialization
// even if the condition is wrong but you want to print the result one time by default

// printf("")