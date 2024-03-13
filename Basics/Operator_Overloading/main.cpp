
/******************     Code Implementing Unary & Binary Member & Global Operators     *********************/                           
                                 


#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include <cstring>
#include "Person.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;


void display(Person p1);


// Function Definition
void display(Person p3)
{
cout<<"Height Of Object P3 : "<<*p3.heap_ptr<<"\n";
cout<<"Name Of Person : "<<p3.str<<"\n";
}


int main()
{

// Using const qualifier on object
const Person p1{38,32,"Mehwish"};

display(p1);

Person p2{p1}; // Copy Constructor is called 



// Using const qualifier on class member method.
int h=p1.get_height();



cout<<"Height Of Object 1 : "<<p1.height<<"\n";
cout<<"Waist Of Object 1 : "<<p1.waist<<"\n";
cout<<"Object 1 Data On Heap : "<<*p1.heap_ptr<<"\n";


cout<<"Height Of Object 2 : "<<*p2.heap_ptr<<"\n";
cout<<"Waist Of Object 2 : "<<p2.waist<<"\n";
cout<<"Object 2 Data On Heap :"<<*p2.heap_ptr<<"\n";

cout<<"Object P1 Heap Pointer : "<<p1.heap_ptr<<"  Object P2 Heap Pointer : "<<p2.heap_ptr<<"\n";

// Move Constructor 
vector <Person> vec;
vec.push_back(Person{10});


// Copy Assignment Operator
Person p3(190,40,"Usman");

p3 = p2;  // Here Copy Assignment Operator will be called as we are copying one object attributes to another
          // The main difference in between copy constructor and copy assignment operator is that both 
          // Objects are already created as in case of copy constructor we can only call it to copy existing object
          // into a another object only at the time of its creation i.e when itś constructor is called.


p3 = Person{200,39,"Ali"};   // Here Move Assignment Operator will be call´d but first constructor will be called to create r value temporary object
                             // Then move assignment operator will be called and we will copy the values to newly created object.


p3 =-p3;
display(p3);
Person p4{190,34,"Usman"};

p3 = p4 + p1;
display(p3);



cout<< (p3==p1)<<"\n";    // This statement will call binary operator member method instead of global member method 


cout<< (p3>p1)<<"\n";     // This statement is calling Global Binary Operator Member method successfully because such method definition is not present
                          // In the class as member method.

return 0;
}


