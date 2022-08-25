#include<iostream>
#include<vector>
#include<list>
#include<iterator>
//#include<bits/stdc++.h>
using namespace std;

//template <typename t>
template <class t>  //generic functions, blueprints
// t square(t x){
//     return x*x;
// }

class x{
    private:
    t a;
    t b;
    public:
    x(t a1, t b1){
        a=a1;
        b=b1;
    }

    t add(){
        return a+b;
    }
};


int main(){

    // vector<int> v1={1,2,3,4};

    // int a;

    // vector <int> :: iterator i;

    // for(int j=1; j<=5; j++){
    //     cin>>a;
    //     i=v1.begin();
    //     v1.insert(i,a);
    // }

        // vector <int> :: iterator k1=v1.begin();
        // vector <int> :: iterator k2=v1.end();

        // while(k1!=k2){
        //     cout<<*k1<<" ";
        //     k1++;
        // }

        // for(auto k=v1.begin(); k!=v1.end(); ++k){
        //     cout<<*k<<" ";
        // }

    //list sets and maps

    //stl (standard template library)

    //template

    // int a=8;

    // float x=81;

    // double y=92;

    // cout<<endl<<square(a);

    // cout<<endl<<square(x);

    // cout<<endl<<square(y);

    // x <int> addInt(8,9);
    // x <float> addFloat(8.2,9.4);
    // x <double> addDouble(9.3, 9.2);

    // cout<<addInt.add()<<"\n";
    // cout<<addFloat.add()<<"\n";
    // cout<<addDouble.add()<<"\n";


    //  EXCEPTION HANDLING (anomalies that can be handled by the compiler at the run time)
    //in c++ we have try, throw and catch

    //try (when we think something may contain anomaly)

    /*
    try{
        |
        |
        throw x
        |
        |
    }
    catch(datatype){
        |
        |
        |
        |
        |
    }
    */

//    int x=-1;
//    //float x=-1;
//    //double x=-1;


//    try{
//     if(x<0){
//         throw x;
//         cout<<"welcome to try";
//     }
//    }

//     // catch(float){
//     //     cout<<"welcome float catch";
//     // }

//     // catch(int){
//     //     cout<<"welcome int catch";
//     // }

//     catch(...){ //it can handle any type of int
//         cout<<"welcome to catch";
//     }


    list<int> l {1,2,3,4};  //list is non-conta

    // l.push_back(5);
    // l.push_front(0);

    // for(auto i=l.begin(); i!=l.end(); ++i){
    //     cout<<*i;
    // }

    // cout<<endl;

    // l.pop_back();
    // l.pop_front();

    // for(auto i=l.begin(); i!=l.end(); ++i){
    //     cout<<*i;
    // }


    // cout<<"\nfront element of list "<<l.front();
    // cout<<"\nback element of list "<<l.back();

    // l.sort();

    // cout<<endl;

    // for(auto i=l.begin(); i!=l.end(); ++i){
    //     cout<<*i;
    // }

    // l.reverse();

    // cout<<endl;

    // for(auto i=l.begin(); i!=l.end(); ++i){
    //     cout<<*i;
    // }

    // cout<<endl;

    // l.clear();

    // if(l.empty()==true){
    //     cout<<"\nlist is empty";
    // }
    // else{
    //     cout<<"\nlist is not empty";
    // }

    list<int> :: iterator k=l.begin();

    l.insert(k,10);

    for(auto k=l.begin(); k!=l.end(); ++k){
        cout<<*k<<" ";
    }

    return 0;

}
