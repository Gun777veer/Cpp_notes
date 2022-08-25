#include <iostream>
#include <vector>
#include<bits/stdc++.h>
 // header file to include stl of vector into our program 
using namespace std;

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
	vector<int> g1={1,2,3,4,5}; //declaration of integer vector g1 of curent size 0s
	vector<int> vec1;      //zero length integer vector
    vector<char> vec2(4);  //4-element character vector
    vector<char> vec3(vec2);//4-element character vector from vec2
    vector<int> vec4(6,3); //6-element vector of 3s

    	vector<int> :: iterator it =  g1.begin(); //this iterator is pointing towards the first element

    for(int i=0; i<5; i++){
      g1.insert(it, i);
      cout<<*it<<" ";
      it++;
    }

    /*
    vectors can change their size dynamically when an element is inserted or removed from them and that is because their 
	storage is automatically being handeled by container.
	(These containers are holder objects that stores collection of other objects)
    */


	//cout<<g1.begin(); //returns first element
	//cout<<g1.end(); //returns last element

		// vector<int> :: iterator i =  g1.begin(); //this iterator is pointing towards the first element
		// vector<int> :: iterator j =  g1.end(); //this iterator is pointing towards the first element

		// while(i<j){
		// 	cout<<*i<<" ";
		// 	i++;
		// }

	// for (i = 1; i <= 5; i++) //to insert 5 elements (1-5) into our vector 
	// 	g1.push_back(i);        //in vectors the elements are inserted from the back

	// cout << "Output of begin and end: ";
	// for (auto i = g1.begin(); i != g1.end(); ++i)
	// 	cout << *i << " ";

	// cout << "\nOutput of cbegin and cend: ";
	// for (i = g1.cbegin(); i != g1.cend(); ++i)
	// 	cout << *i << " ";

	// 	/*
		// begin() returns an iterator to beginning while cbegin() returns a const_iterator to beginning. 
		// The basic difference between these two is iterator (i.e begin() ) lets you change the value of the object 
		// it is pointing to and const_iterator will not let you change the value of the object
		// */

	// cout << "\nOutput of rbegin and rend: ";
	// for (int ir = g1.rbegin(); ir != g1.rend(); ++ir){
	// 	cout << *ir << " ";
	// }

	// cout << "\nOutput of crbegin and crend : ";
	// for (int ir = g1.crbegin(); ir != g1.crend(); ++ir)
	// 	cout << *ir << " ";


	// for (int i = g1.begin(); i != g1.end(); ++i)
	// 	cout << *i << " ";


	// //insertion into vector:-

	// vector<int> vec5;
    // int element, size;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout<<"Enter an element to add to this vector: ";
    //     cin>>element;
    //     vec5.push_back(element);
    // }
    // display(vec5);
    // return 0;


	// g1.insert(i,3); // basically this will insert 3 at the begining of the vector move the other elements to an index ahead
	// g1.insert(i+1,3); // basically this will insert 3 at the 2nd element of the vector move the elements after that to an index ahead
	// g1.insert(i+1, 5,3); // this will insert 5 3's into the vector from the 2nd element


	return 0;
}

//methods of printing the vector

// C++ program to illustrate the
// element access in vector

//1st:-

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int> g1;

// 	for (int i = 1; i <= 10; i++)
// 		g1.push_back(i * 10);

//   for(auto i=g1.begin(); i<g1.end(); i++){
//     cout<<*i<<" ";
//   }

// 	return 0;
// }

//2nd :-

// // C++ program to illustrate the
// // element access in vector
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int> g1;

// 	for (int i = 1; i <= 10; i++)
// 		g1.push_back(i * 10);

//   for(int i=0; i<g1.size(); i++){
//     cout<<g1[i]<<" ";
//   }


// 	return 0;
// }

//3rd:-

// // C++ program to illustrate the
// // element access in vector
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int> g1;

// 	for (int i = 1; i <= 10; i++)
// 	  g1.push_back(i * 10);

//   for(int i=0; i<g1.size(); i++){
//     cout<<g1.at(i)<<" ";
//   }

// 	return 0;
// }


//  #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	vector<int> g1;
	
// 	int n;
// 	cin>>n;
	
// 	int a;

//   for(int i=0; i<n; i++){
//     cin>>a;
//     g1.push_back(a);
//   }
  
// for(int i=0; i<n; i++){
//     cout<<g1[i]<<" ";
//   }


// 	return 0;
// }




