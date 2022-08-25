#include<bits/stdc++.h>
using namespace std;

int main(){
    //Switch:-
    /*int a,b;
    cin>>a>>b;
    switch (a+b)
    {
    case 8:
        cout<<"Eight";
        break;//without break all the cases after this will also be executed
    case 6:
        cout<<"Six";
    default:
        cout<<"zero";
        break;
    }*/

    //write a program to input a program from keyboard to check if its vowel or consonent

    /*char c;
    cin>>c;
    switch(c){
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            cout<<"Vowel";
            break;
        default:
            cout<<"Is not a vowel";
            break;
    }*/

    //create simple calculator which will perform + - * / on 2 no. in case of any other operators
    /*float a,b;
    cin>>a>>b;
    cout<<"Enter the operation you want to perform (+,-,*,/): ";
    char op;
    cin>>op;
    switch(op){
        case '+':
            cout<<"a+b ="<<(a+b)<<endl;
            break;
        case '-':
            cout<<"a-b ="<<(a-b)<<endl;
            break;
        case '*':
            cout<<"a*b ="<<(a*b)<<endl;
            break;
        case '/':
            cout<<"a/b ="<<(a/b)<<endl;
            break;
        default:
            cout<<"Please enter a valid operator";
    }*/
    //enter a character from keyword and print its ascii value

    // TYPE CASTING

    /*char s;
    cin>>s;

    //Explicit

    int a;
    cin>>a;
    cout<<(float(a)/2.0);*/

    //Implicit
    /*
    int a = 5;
    float x;
    x = a/2; //ans should be 2.0 but the compiler is high
    cout<<x;
    */

    //find quotient and reminder of a no.
    //to find the size of int, float, double
    //swap two no.
    //whether a no. is leap or not
    /*
    string s;
    getline(cin,s);
    cout<<s;
    */

    // write a program to all roots of a quadratic equation
/*
    float a,b,c;
    cin>>a>>b>>c;

    float c1 =(-b)/(2.0*a);

    float d = (b*b)-(4.0*a*c);

    float root1, root2;

    if(d>0.0){
        root1 = (-(b)+sqrt(d))/((2.0)*a);
        root2 = (-(b)-sqrt(d))/((2.0)*a);
        cout<<"Root1= "<<root1<<" Root2= "<<root2;
    }
    else if(d==0.0){
        root1=root2=(c1);
        cout<<"Root1= "<<root1<<" Root2= "<<root2;
    }
    else{
        cout<<"Roo1t1= "<<c1<<"+i"<<sqrt(d)/((2.0)*a);
        cout<<" Root2= "<<c1<<"-i"<<sqrt(d)/((2.0)*a);
    }
*/
    // factorial of a no. using while loop

    /*int a;
    cin>>a;
    int ans;

    while(a>=1){
        ans *=a;
        a--;
    }
    cout<<ans;
    */

    /*for( ; ; ){

    }*/ // this is valid for loop

    // TO PRINT THE FIBONACCI SERIES
/*
    int n;
    cin>>n;
    int a = 0, b =1;
    cout<<"0 ";
    for(int i =0; i<n-1; i++){
        int nextCout = a+b;
        cout<<nextCout<<" ";
        a=b;
        b = nextCout;
    }
    */

    //reverse a no.
    int n;
    cin>>n;
    int reverse=0;
    while(n>0){
       int rem = n%10;
        reverse = reverse*10 + rem;
        n=n/10;
    }
    cout<<reverse;

    //write a
}


