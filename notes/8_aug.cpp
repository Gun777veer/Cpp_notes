// #include<bits/stdc++.h>
// using namespace std;

// //inline function

// class abc{
//     public:
//     int a;
//     inline void display(){ //when our function is called the function call will be replaced by the function definition if the functions datatype is other than void even ifn it contains switch or loop
//         cout<<"Display\n";
//     }
//     void increment(){
//         a++;
//     }
//     void output(){
//         cout<<"output\n";
//     }
// };

// int main(){

//     abc a1;
//     a1.display(); //fn call when there is a function call it saves the address of next on stack
//     a1.a=8;
//     a1.increment();
//     a1.output();

//     return 0;

// }

// encapsulation:- binding of data and function together
// data abstraction:- hiding the complexity/ unnecessary
// info hiding:- data is hidden so it will be safe from accidental manipulation/ keeping something confidential

#include<bits/stdc++.h>
using namespace std;

//Algorithms (step by step unambiguous, clear and correct instruction to solve).

//time complexity:- big 'o', omega, theta.

//types of analysis:- best, average(not every algo has avg) and worst case.



int main(){

    int n,s;
    cin>>n>>s;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool check=true;

    //linear search

    // for(int i=0; i<n; i++){
    //     if(arr[i]==s){
    //         check=false;
    //     }
    // }

    // if(check==false){
    //     cout<<"Yes";
    // }
    // else{
    //     cout<<"No";
    // }

    //time complexity:= worst:- o(n), best:- o(1), average:- o(n/2)/o(n)

    //binary search (array should be sorted)

    sort(arr, arr+n);

    int i=0;
    int j=n-1;


    while(i<j){
        int mid=(i+j)/2;
        if(arr[mid]==s){
            check=false;
            break;
        }
        else if(arr[mid]<s){
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }

    if(check==false){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


    return 0;

}

//asymptotic notations:-
/*
    1 < log n < (n)^1/2 < n < n^2 < n^3 <....< 2^n < 3^n <....<n^n
    Big 'O':- upper bound
    Omega:- Lower bound
    Theta:- tight/average bound
*/

/*
upper bound of a fn is g(n)
                            if +ve c, no(if no is positive)
                f(n)<=c*g(n)

lower bound of f(n) is g(n)
                            if +ve c, no(if no is positive)
                f(n)>=c*g(n)

tight bound is fixed
*/