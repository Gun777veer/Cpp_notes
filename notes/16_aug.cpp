#include<bits/stdc++.h>
using namespace std;

//to calculate factorial of a no.

int fact(int n){
    if(n==0){ // terminal condition
        return 1;
    }
    else{
        return n*fact(n-1); //base condition
    }
}

int sum(int n){
    if(n==0){ // terminal condition
        return 0;
    }
    else{
        return n+sum(n-1); //base condition
    }
}

int fib(int n){

    if(n<=1){ //terminal condition
        return n;
    }
    else{
        return fib(n-1)+fib(n-2); //base condition
    }
}

int main(){

    // int p=0;


    // for(int i=0; p<=n; i++){
    //     p+=i;
    // }  ime complexity is o(root of n)
    // k(k+1)/2 > n; k^2+k/2>n; k^2=n
    //this is substitution method

    // for(int i=n; i>=1; i/=2){
    //     //som
    // }
    //log(n)
    //tree method//tracing tree

    //recursion(time complexity of recursive function is represented with t() instead of o())

    // when is recursion suitable (HW)

    //base condition->initiates recursive loop
    //terminal condition->exit

    cout<<fact(1)<<"\n";
    cout<<sum(4)<<"\n";
    for(int i=0; i<4; i++){
        cout<<fib(i)<<" ";
    }

    //backward substitition method
    //t(n)=t(n-1)+1


}