#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include "Person.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;



/* Default Constructor Without any Paramter

Person()
{
    cout<<"Default Constructor Called"<<"\n";
};

/* Default Constructor Definition With Parameters

Person(uint8_t h,uint8_t w,string n)
{
height = h;
w = waist;
name = n ;
cout<<"Constructor with parameter called \n";
}; 

*/


/* Constructor with no parameters calling delegate constructor with parameters.

Person::Person():Person{190,0," "}  // Delegated Constructor is called
{
cout<<"Default Constructor Initializing Values \n";
}

// Delegate constructor with paramters, Where object parameter height is assigned value h, waist = w, name =nam , these parameters are passed
// At the time of object initialization
Person::Person(uint8_t h,uint8_t w,string nam):height{h},waist{w},name{nam}   // Default constructor with parameters and initialization list
{
cout<<"Constructor With Argumentsis Callled \n";
}
*/

// Default Constructor With No Parameters
Person::Person()
{

}



// Using One Constructor Instead of so many overloaded constructors

Person::Person(int h,int w):height{h},waist{w}
{
heap_ptr = new int;    
*heap_ptr = h;
cout<<"Constructor called with initializer list \n";
}




 /*Shallow Copy Constructor Results In Memory Leak Issue Cause : 
   Due to pass by reference as the destination object when gets out of scope is popped out of stack
   And as a result destructor deletes the heap memory pointer and we loose access to it with the object we passed as source reference " */                                                        

// Shallow Copy Constructor 
/*

Person::Person(const Person &source):heap_ptr{source.heap_ptr}  // Here we are copying address of source object heap ptr into destination 
                                                                // object heap_ptr
{
cout<<"Copy Constructor is called \n";
}

*/

// Deep Copy Constructor

Person::Person(const Person &source):Person(*source.heap_ptr,source.waist)
{
cout<<"Copy Constructor is called \n";
}


// Move Constructor Only Used On R Values

Person::Person(Person &&source):heap_ptr{source.heap_ptr},waist{source.waist}
{
cout<<"Move Constructor is called \n";
source.heap_ptr=nullptr;
}

// Destructor
Person::~Person(){
cout<<"Destructor Called"<<"\n";
delete heap_ptr;
}

// Class Member Method
int Person::get_height() const   // If we don´t use const keyword then we cannot access object attribute
{
return height;  
}



