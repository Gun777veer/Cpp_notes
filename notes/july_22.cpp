#include<bits/stdc++.h>
using namespace std;

int main(){
    // unsigned int i = pow(2,32);
    // while(i++!=0){
    //     cout<<++i<<"\n";
    // }

    // int x=3;
    // double y=3.00;
    // if(x==y){
    //     cout<<"yed";
    // }
    // else{
    //     cout<<"no";
    // }

    //POINTERS
    // void *ptr;
    // char a='a';
    // ptr=&a;
    // cout<<sizeof(ptr)<<endl;
    // int b=0;
    // ptr=&b;
    // cout<<sizeof(ptr)<<endl;

    //doubt 

    int *ptr[5];

    int a[5]={1,2,3,4,5}, i=0;
    while(i<5){
        ptr[i]=&a[i];
        i++;
        ptr[i]++;
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<*ptr[i]<<" ";
    }

    // int a=8;
    // int *ptr=NULL;

    // int **ptr1=NULL;

    // ptr=&a;

    // ptr1=&ptr;

    // cout<<**ptr1<<" ";

    // cout<<*ptr1;

    return 0;

}
