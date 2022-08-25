#include<bits/stdc++.h>
using namespace std;

int main(){

    // St-2 syllabus:-
    /*
    pointer
    arrays
    oops
    strings
    */

   //strings

   //reverse a string

//     string a;
//    cin>>a;
//    string r="";

//    for(int i=a.length(); i>=0; i--){

//     r+=a[i];

//    }

//    cout<<r;

   //replace every letter in the string with the next letter in the alphabet

//     string a;
//    cin>>a;
//    string r="";

//    for(int i=0; i<a.length(); i++){

//     r+=a[i]+1;

//    }

//    cout<<r;

   //capetalize the 1st letter of word where words


    // string str;
    // getline(cin, str);

    // for(int i=0; i<str.length()-1; i++){
    //     if(i==0){
    //         str[i]-=32;
    //     }
    //     if(str[i-1]==' '){
    //         str[i]-=32;
    //     }
    // }
    // cout<<str;


   //find the largest word in the string

   string a;
   cin>>a;
   string r="";
   int c=0;
       int c1=0;

    for(int i=0; i<a.length(); i++){
        // while(a[i]!=' '){
        //     c++;
        // }
        // if(c1>c){
        //     r[i]=a[i];
        // }
        // c1=c;
   }

   cout<<r;



   //count all the vowels in the string

//       string a;
//    cin>>a;
//    string r="";
//    int c=0;

//    for(int i=0; i<a.length(); i++){
//         if(a[i]=='a' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
//             c++;
//         }
//    }

//    cout<<c;



   //find wether a string is palindrome

//     string a;
//    cin>>a;
//    string r="";

//    for(int i=a.length()-1; i>=0; i--){

//     r+=a[i];

//    }

//    if(r==a){
//         cout<<"is a palindrome";
//    }
//    else{
//     cout<<"no";
//    }


   //find a word with the highest repeated letter;

//    string a;
//    cin>>a;
//    string r="";
//    int c=0;

//    for(int i=0; i<a.length(); i++){
//     if(a[i]==a[i+1]){
//         c++;
//     }
//    }

//    cout<<r;


   //change upper-case to lower-case and vice-versa

   //wether a sub string is part of a given string or not

//     string a;
//    cin>>a;
//    string r="aa";

//    bool c=true;

//    for(int i=0; i<a.length(); i++){
//     for(int j=i; j<r.length(); j++){
//         if(a[i]==r[j]){
//             c=false;
//         }
//     }
//    }

//    if(c==true){
//     cout<<"no";
//    }
//    else{
//     cout<<"yes";
//    } 

    return 0;
}