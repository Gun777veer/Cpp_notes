#include<bits/stdc++.h>
using namespace std;

class base{

    private:
    int x;

    public:
    virtual void fun()=0;

};

//Abstract class: when the implementation of all the functions is not in the base class

// class is abstract if it has atleast one pure function

class derived:public base{

    public:
    void fun(){
        cout<<"function is called";
    }
};

int main(){

    derived d;

    d.fun();

    return 0;

}