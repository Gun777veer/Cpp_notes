#include<bits/stdc++.h>
using namespace std;

//simple class

class smallbob{ // it contains one data item and two member functions. The two member function provides the only access to the data items
    private: //private data can only accessed from within the class (access specifier) can not be inherited by the inherited class
    int somedata;
    int speed; // class data the data items.
    //data items within a class are called data members it follows keyword private so it can't be accessed outside the class
    public:// public data is accessible from outside the class (access specifier)
    void setdata(int d){  // member function to set data.
    //member functions are functions/methods included in class
    // member functions defined in a class are create as *inline functions by default *(not confirmed)
        somedata = d;
    }
    void showdata(){  // member function to display data
        cout<<"data is "<<somedata<<endl;
    }
};

//functions are public data is private
//data is hidden so it will be safe from accidental manipulation
//but the other case where function is private and data is public is also possible

int main(){

    //class describes how a structure will look but doesn't declare any structure variable.
    //It is objects that participate in program operations
    //defining the objects this also called instantiating them.
    //term instantiating arises because an instance of a class is created. Objects are sometimes called instance variable
    smallbob s1, s2; // defining two objects of class smallbob

    s1.setdata(123); //calling member function This function sets the variable somedata in an object s1
    s2.setdata(234);

    // a member function is always called in connection to a object of the class it is in because it is called to act on a specific object


    s1.showdata(); //calling member function
    s2.showdata();

    return 0;
}

//placing data and functions in a single entity is a central idea in oops

// classes and objects
// an object is said to be an instance of a class, same as Cheverolet in an instance of a vehicle.
//here the two objects s1 and s2 defined in main are the instance of the class smallbob

//key feature of oops is data hiding basically one class's data is hidden from other class's

