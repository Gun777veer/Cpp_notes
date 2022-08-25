#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, n1;
    cin>>n>>n1;

    int arr[n][n1];

    for(int i=0; i<n; i++){
        for(int j=0; j<n1; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n";

    for(int i=0; i<n; i++){
        for(int j=0; j<n1; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
        cout<<"\n";
    }

}