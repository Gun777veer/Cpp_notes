#include<bits/stdc++.h>
using namespace std;

int main(){
    //containers are of 3 types:-
    //sequential container (vector, list), associative container (directly access the elements better in terms of time complexity)

    //Sets

    //there are no elements associated with index

    set<int> s; //set< int,greater <int> > (would give an reverse order)
    // set< int , greater<int> > s;

    s.insert(10); //when we are inserting the elements it will be sorted.
    s.insert(5);
    s.insert(20);
    s.insert(20); //it will not insert this value

    // for(auto i=s.begin(); i!=s.end(); ++i){//rbegin-1 to rend to reverse
    //     cout<<*i<<" ";
    // }

    //find

    auto i=s.find(10);
    if(i==s.end()){
        cout<<"Not found\n";
    }
    else{
        cout<<"found\n";
    }
    while(i!=s.end()){
        cout<<*i<<" ";
        i++;
    }

    cout<<"\n";

    // s.clear(); //will empty the set

    // if(s.empty()==1){
    //     cout<<"set is empty\n";
    // }
    // else{
    //     cout<<"set is not empty\n";
    // }

    cout<<s.size()<<"\n";

    int a;
    cin>>a;


    try{
         if(s.find(a)!=s.end()){
            throw a;
        }
    }

    catch(...){ //it can handle any type of datatype
        cout<<"the item is already in the set";
    }
    s.insert(a);

    set<int> s2{1,2,4,5};

    s2.erase(2); //it will remove 2

    // s2.lower_bound(3);

    // s2.upper_bound(2);

    //MULTI SET

    set<int> s4={10,20,30};

    multiset<int> :: iterator k;
    for(k=s4.begin(); k!=s4.end(); ++k){
        cout<<*k<<" ";
    }
    multiset<int> s3(s4.begin(), s4.end());

    for(k=s3.begin(); k!=s3.end(); ++k){
        cout<<*k<<" ";
    }

    s3.insert(10);
    for(k=s3.begin(); k!=s3.end(); ++k){
        cout<<*k<<" ";
    }

    cout<<"\n";


    //MAPS  (key(unique) and value(can be same) pair)

    map<int, int> m; //data type of key and value

    m[1]=10;  //m[key]=value;
    m[2]=20;
    m[101]=3;

    cout<<m[101]<<"\n";

    for(auto i=m.begin(); i!=m.end(); ++i){
        cout<<(*i).first<<" "<<(*i).second<<"\n"; //first will fetch the key while second will fetch the value;
    }



    for(auto i=m.begin(); i!=m.end(); ++i){
        cout<<(*i).first<<" "<<(*i).second<<"\n"; //first will fetch the key while second will fetch the value;
    }

    return 0;
}