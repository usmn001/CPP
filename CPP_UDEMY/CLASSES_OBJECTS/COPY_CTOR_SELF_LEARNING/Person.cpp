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

Person(int h,int w,string n)
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
Person::Person(int h,int w,string nam):height{h},waist{w},name{nam}   // Default constructor with parameters and initialization list
{
cout<<"Constructor With Argumentsis Callled \n";
}
*/

// Using One Constructor Instead of so many overloaded constructors

Person::Person(int h,int w,string nam):height{h},waist{w},name{nam} 
{
data = new int;
*data = h;    
cout<<"Default Constructor for height = "<<height<<"\n";
}



// Copy Constructor

Person::Person(const Person &source):height{source.height},waist{source.waist},name{source.name}
{
cout<<"Copy Constructor is called \n";
data = new int;
*data = source.height;
cout<<"Copied Items Are : "<<source.height<<"   "<<source.waist<<"     "<<source.name<<"\n";
}

// Move Constructor

Person::Person(Person &&source):height{source.height},waist{source.waist},name{source.name}
{
cout<<"Move Constructor is called \n";
data = new int;
*data = source.height;
source.height=0;
source.waist=0;
source.name=" ";

cout<<"Copied Items Are : "<<height<<"   "<<waist<<"     "<<name<<"\n";
}



// Destructor
Person::~Person(){    
cout<<"Destructor Called"<<"\n";
if(this->data!=nullptr)
{
delete this->data;
}

}




