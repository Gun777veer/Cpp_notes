#include<bits/stdc++.h>
using namespace std;
//factorial using pointers and function
// int fact(int *y){
//     int fact=1;
//     int n = *y;
//     for(int i=1; i<=n; i++){
//         fact=fact*i;
//     }
//     return fact;
// }

// int main(){

//     int y;
//     cin>>y;

//     cout<<(fact(&y));

// }

// struct student{
//     int age, uid;
//     string name;
// }s1;

// int main(){
//     struct student s2;
//     cin>>s1.age>>s1.uid;
//     getline(cin, s1.name);
//     cin>>s2.age>>s2.uid;
//     getline(cin, s2.name);

//     cout<<s1.age<<" "<<s1.uid<<"\n";
//     cout<<s2.age<<" "<<s2.uid<<"\n";
// }

// struct student{
//     int age, uid;
//     string name;
// };

// int main(){
//     student s1[5];
//     for(int i =0; i<5; i++){
//         cin>>s1[i].uid>>s1[i].age;
//     }
//     for(int i =0; i<5; i++){
//         cout<<s1[i].uid<<" "<<s1[i].age<<"\n";
//     }

// }

//struct and function



// struct student{
//     int age, uid;
//     string name;
// };
// void display(struct student k1){
//     cin>>k1.age>>k1.uid;
//     cout<<k1.age<<" "<<k1.uid;
// }

// int main(){
//     student s1;

//     display(s1);

//     return 0;
// }


//struct and pointer 

struct student{
    int age, uid;
    string name;
};

// int main(){
//     student s1;

//     student *s2 = &s1;

//     cin>>s2->age>>s2->uid;


//     cout<<s2->age<<" "<<s2->uid;

// }

//difference b/w struct and union

//size of stucture is equal to sum of its elements

//while size of union is equal to its largest elements

//don't use string in union 


union student{
    int age, uid;
    double marks;
};

int main(){
    student s1;

    cin>>s1.age>>s1.uid;
    cout<<s1.age<<" "<<s1.uid;

}

// oops
/*


*/