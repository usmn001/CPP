#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <cstring>
#include "Derived.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;  
using std::ostream;


// Using One Constructor Instead of so many overloaded constructors


Derived::Derived()
{
cout<<"Derived Class Constructor called with initializer list \n";
}

string Derived::get_noise()
{
    cout<<"Derived Get Noise \n";
    return "Hehehe";
}

uint8_t Derived::get_num_legs()
{
   cout<<"Derived num_legs";
   return 2;
}

Derived::~Derived()
{ 
    cout<<"Derived Class Destructor Called"<<"\n"; 
}