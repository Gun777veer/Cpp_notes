// #include<bits/stdc++.h>
//  using namespace std;

// class base{

//     private:
//     int x;

//     public:
//     virtual void fun(){
//         cout<<"base";
//     };

// };


// class derived:public base{

//     public:
//     void fun(){
//         cout<<"function is called";
//     }

// };

// int main(){

//     derived d;

//     base *b;

//     b=&d;

//     b->fun();

//     return 0;

// }


//Dynamic array

//dynamic memory allocation:- new
//memory is freed using :- delete

#include<bits/stdc++.h>
using namespace std;

int main(){

    // int n;
    // cin>>n;

    // int *arr= new int(n);

    // for(int i=0; i<n; i++){
    //     cin>>arr[i];
    // }

    // for(int i=0; i<n; i++){
    //     cout<<arr[i];
    // }
    // cout<<"\n";

    // delete(arr);

    // cout<<arr[3];

    // string n="g";

    // string *p;
    // p=n;
    // cout<<p;

    // char n[5]={'r','e','t'};
    // char *ptr;

    // ptr=n;

    // cout<<ptr<<"\n";
    // cout<<*ptr<<"\n";
    // cout<<sizeof(ptr)<<"\n";

    // if(n[4]==NULL){
    //     cout<<"hello";
    // }

    // string n[5]={"j","e","l","l"};

    // string *ptr;


    // ptr=n;

    // cout<<ptr<<"\n";
    // cout<<*ptr<<"\n";
    // cout<<sizeof(ptr)<<"\n";

    // if(n[4]==NULL){
    //     cout<<"hello";
    // }

    // to calculate length of a string:- name_of_string.length()

    // char name[10];

    // cin.get(name, 5);


    // cout<<name<<"\n";

    // cout<<sizeof(name);

    //string always takes one char extra to display NULL

    // string name="Hello";

    // name.push_back(' ');

    // name.push_back('h');

    // cout<<name<<"\n";

    // name.pop_back(); //will delete the last char of the string

    // cout<<name<<"\n";

    // name.resize(3);

    // cout<<name<<"\n";

    // str copy

    string n="gun";
    string n1="veer";

    swap(n,n1);

    cout<<n<<"\n";
    cout<<n1<<"\n";

    char na[]="sign";
    char na1[]=" this";

    strcat(na,na1);

    cout<<na;

}