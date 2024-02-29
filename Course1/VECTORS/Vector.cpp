#include<iostream>
#include<vector>
#include<stdint.h>

using std::vector;
using std::cin;
using std::cout;
using std::endl;


int main(){

// Example 1 :

vector <int> number {0,1,2,3};
vector<float> temp  { 0.1, 0.2};

for(auto a :number)   // Iterating over vector number using modern range based for loop
{
cout<<a<<"\n";

}

cin>>temp.at(0);         // Accessing 0 index element of vector object temp.
cout<<temp.at(0);       //  Accessing 0 index element of vector object temp.


// Example 2 : Vector inside a vector

vector<vector<float>> result 
{

{ 80.0, 80.1, 80.2  },
{70.1,  70.2, 75.3 },

};

cout<<"\n student 1 result of 1st subject : "<<result.at(0).at(0)<<"\n";
cout<<"\n student 1 result of 2nd subject : "<<result.at(0).at(1)<<"\n";
cout<<"\n student 2 result of 1st subject : "<<result.at(1).at(0)<<"\n";
cout<<"\n student 2 result of 2nd subject : "<<result.at(1).at(1)<<"\n";





// Section 7 :Coding Challenge 

vector <int> vector1;
vector <int> vector2;

vector1.push_back(10);
vector1.push_back(20);
cout<<vector1.at(0)<< "   "<<vector1.at(1)<<"\n";
cout<<"Size of Vector 1 = "<<vector1.size()<<"\n \n"; 


vector2.push_back(100);
vector2.push_back(200);
cout<<vector2.at(0)<< "   "<<vector2.at(1)<<"\n";
cout<<"Size of Vector 2 = "<<vector2.size()<<"\n"; 

vector <vector<int>> vector_2d;
vector_2d.push_back(vector1);
vector_2d.push_back(vector2);

cout<<vector_2d.at(0).at(0)<<"\n";
cout<<vector_2d.at(0).at(1)<<"\n";
cout<<vector_2d.at(1).at(0)<<"\n";
cout<<vector_2d.at(1).at(1)<<"\n";

vector1.at(0) = 1000;


cout<<"\nVector_2d  : \n";
cout<<vector_2d.at(0).at(0)<<"\n";     // Here we are not seeing 1000 because we have copied vector 1 into vector_2d
cout<<vector_2d.at(0).at(1)<<"\n";
cout<<vector_2d.at(1).at(0)<<"\n";
cout<<vector_2d.at(1).at(1)<<"\n";


cout<<"\nVector 1  :";
cout<<vector1.at(0)<< "   "<<vector1.at(1)<<"\n";


// Section 9 : 


 vector<int> vec {1,3,5,15,16,17,18,19,20,21,25,26,27,30,50,55,56,58,100,200,300,400,500,600,700};
    
    //---- WRITE YOUR CODE BELOW THIS LINE----
    int num = 0;
    int count {0};
    for(auto n :vec)
    {
        
    if( (n%3)==0 )
    {
    count = count+1;
    }
     else if((n%5)==0)
     {
     count = count +1;
     }
    }
















return 0;    
}
