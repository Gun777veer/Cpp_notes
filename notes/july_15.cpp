#include<bits/stdc++.h>
using namespace std;

int main(){
    //int a,b;
    //cin>>a>>b;
    /*for(int i=1; i<=b; i++){
        for(int j=1; j<=a; j++){
            if(i==1 || i==b || j==1 || j==a){
                cout<<"x";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    ****
     ***
      **
       *
    */
   /*
    for(int i=b; i>=1; i--){
        for(int j=0; j<a-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=b; i>=1; i--){
        for(int j=0; j<a-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<i;
        }
        cout<<endl;
    }
    for(int i=1; i<=b; i++){
        int c=0;
        for(int j=1; j<(a-i); j++){
            cout<<" ";
        }
        int count=0;
        for(int j=0; j<=i; j++){
            cout<<"*"<<" ";
            count+=(j-1);
        }
        while(count--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }*/
    /*
    for(int i=b; i>=1; i--){
        for(int j=0; j<a-i; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<a-1; j++){
            cout<<" ";
        }

        cout<<endl;
    }*/
    int row;
    cin >> row;

    for (int i = row; i>=1; i--)
    {
        int k = 0;
        for (int space = 0; space < row - i; space++)
        {
            cout << " ";
        }
        while (k != (2 * i - 1))
        {
            if(k==(row) || k==(2*i-2)){
               cout <<"*"<< " ";
               k++;
            }
            else{
                cout<<" ";
                k++;
            }
        }
        cout << " \n";
    }
    }


