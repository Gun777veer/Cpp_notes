#include<bits/stdc++.h>
using namespace std;

int main(){

    //containers are of 3 types:-
    //sequential container (vector, list), associative container (directly access the elements better in terms of time complexity), derived container

    //QUEUE (Derived container) (FIFO)

    queue<int> q;

    q.push(10); //there is also insert
    q.push(20);
    q.push(30);

    queue<int> q1;

    q1.push(10); //there is also insert
    q1.push(20);
    q1.push(50);

    q1.swap(q);


    cout<<q.size()<<"\n";

    cout<<q.front()<<"\n"; //front always point to the first element

    cout<<q.back()<<"\n";

    queue<int> temp = q;

    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    while(!temp.empty()){
        cout<<temp.front()<<" ";
        temp.pop();
    }


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

    map<char, int> m1; //data type of key and value
    // map<char, int, greater<char>> m1; //will reverse the map

    m1['a']=1;  //m[key]=value;
    m1['b']=2;
    m1['c']=3;

    // m1.insert('a',8); because you are trying to add a duplicate value
    // m1.insert('b',4);
    // m1.insert('c',2);

    m1['a']=8;

    map<char, int> m2; //data type of key and value

    m2['e']=10;  //m[key]=value;
    m2['f']=20;
    m2['g']=30;

    // m1.insert('a',8); because you are trying to add a duplicate value
    // m1.insert('b',4);
    // m1.insert('c',2);

    m1['a']=8;

    swap(m1,m2); //data types of value and key should be same

    for(auto i=m1.begin(); i!=m1.end(); ++i){
        cout<<i->first<<" "<<i->second<<"\n"; //will also work for vector and also other stl's
    }
    cout<<"\n";

    // m1.erase('e');

    // for(auto i=m1.begin(); i!=m1.end(); ++i){
    //     cout<<i->first<<" "<<i->second<<"\n"; //will also work for vector and also other stl's
    // }

    // m1.clear();

    // if(m1.empty()==1){
    //     cout<<"map is empty\n";
    // }
    // else{
    //     cout<<"map is not empty\n";
    // }

    // m1.insert(m.begin(),m.end());


    // for(auto i=m1.begin(); i!=m1.end(); ++i){
    //     cout<<i->first<<" "<<i->second<<"\n"; //will also work for vector and also other stl's
    // }

    cout<<"\n";

    auto i=m1.find('g');

    cout<<(*i).first<<" "<<(*i).second<<"\n";

    // cout<<(*(m1.find('e'))).first<<" "<<(*(m1.find('e'))).second<<"\n";


    // m1.erase(m1.find('e'), m1.end());

    // for(auto i=m1.begin(); i!=m1.end(); ++i){
    //     cout<<i->first<<" "<<i->second<<"\n"; //will also work for vector and also other stl's
    // }

    return 0;
}