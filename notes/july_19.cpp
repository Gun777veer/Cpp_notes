#include<bits/stdc++.h>
using namespace std;
// EXTERN  will have the variable accessed in other files too
extern int g =3;

int sum(int a, int b){
    return (a+b);
}

int sub(int a, int b){
    return (a-b);
}

int factorial(int n){
    int x=1;
        x *= (n-1);
        return x;
}

int main(){

    //constexpr int i{2+3};

    //constexpr takes constant values it won't accept any variables (will run on online compiler)

    //const int a=1;

    //const int b=2;

    //constexpr int i = a+b;

    //cout<<i;

    //int b=5;


   // cout<<(static_cast<float>(b)/static_cast<float>(3))<<"\n";

    //cout<<float(5);

        // {} DENOTES A BL0CK

    /*int i =8;

    int j=4;


    cout<<i<<"\n";
    {
        int i = 4;
        cout<<i<<"\n";
    }

    //FUNCTIONS

    cout<<"Sum is "<<sum(i,j);

    int n;
    cin>>n;
    int ans = factorial(n);
    cout<<ans;*/

    // pointers
    int a[5]={1,2,3,4,5};

    int *y = NULL;

    y=a;

    int i=0;

    while(i<5){
        cout<<*y;
        y++;
        i++;
    }

}


