//recurrence relation
//three methods to calculate its complexity
//1. tree/tracing tree
//2. backward substitution
//3. master theorem/ formulae method

#include<bits/stdc++.h>
using namespace std;

// void test(n){
//     if(n>0){
//         cout<<n;
//         test(n-1);
//     }
// }

/*    _
     / 1         n=0
t(n){
     \ t(n-1)+1  n>0
      -
*/

//Find the complexity using substitution method

/*t(n)=t(n-1)+1.........(1)

t(n-1)=t(n-2)+1.........(putting this in eq.(1))

t(n)=t(n-2)+2...........(2)

t(n-2)=t(n-3)+1.....(putting this in eq.(2))

t(n)=t(n-3)+3...........(3)
.
.
.
t(n)=t(n-k)+k

this condition becomes false if

n-k=0
  .
.   ., n=k

t(n)=t(n-n)+n
t(n)=t(0)+n
t(n)=1+n

therefore, complexity is o(n)

*/

void test(int n){
    if(n>0){     //1
        for(int i=0; i<n; i++){   //n
            cout<<n;    //1*n
        }
        test(n-1);   //n-1
    }  // 1+2n+t(n-1) or n+t(n-1)
}

/*    _
     / 1         n=0
t(n){
     \ t(n-1)+n  n>0
      -
*/

//Tree method
//(right hand side will include recursive call)
/*

                     test(n)
                    /       \
                  n-1        test(n-1)
                            /     .
                          n-2     .
                                  .
                                  test(2)
                                 /      \
                                1        test(1)
                                        /
                                       0


substitution method


/*t(n)=t(n-1)+n.........(1)

t(n-1)=t(n-2)+n-1.........(putting this in eq.(1))

t(n)=t(n-2)+2n-1...........(2)

t(n-2)=t(n-3)+n-2.....(putting this in eq.(2))

t(n)=t(n-3)+3n-3...........(3)
.
.
.
t(n)=t(n-k)+kn-k

this condition becomes false if

n-k=0
  .
.   ., n=k

t(n)=t(n-n)+n*n-n
t(n)=t(0)+n^2-n
t(n)=1+n^2-n

therefore, complexity is o(n^2)

*/


//masters theorem/division method (mostly applicable in three cases)
/*
it is applicable if and only if your recurrence relationship is of type

t(n)=a*t(n/b)+f(n)
case 1:-
a>=1, b>=1, f(n)=o(n^log(base b)a-e) (for(e>0))
then o(n^log(base b)a)

t(n)=9*t(n/3)+n
a=9 b=3
o(n^log(base 3)9-E)
o(n^2-E)
e=1
o(n^(2-1))
o(n)

case 2:-

t(n)=a*t(t/b)+f(n)
a>=1, b>=1, f(n)=theta=(n^log(base b)a)

then => t(n)=theta(n^log(base b)a log(n))

t(n)=t(2n/3)+1
a=1, b=3/2, f(n)=1

theta(n^log(base 3/2)1)
theta(n^0)
theta(1)

then complexity,

theta(log(n))

case 3:-

t(n)=a*t(t/b)+f(n)

a>=1, b>=1, f(n)=omega(n^log(base b)a+E) (for(E>0))
AND
a*f(n/b)<=c*f(n)
for some c<1

t(n)=3*t(n)+nlog(n)
a=3, b=4, f(n)=nlog(n)

f(n)=omega(n^log(base 4)3+E)
omega(n^0.793+0.21)
omega(n)

3*(n/4log(n))


*/

int main(){

}

