
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
using std::string;


class Person
{

public :
int height{0};
int waist{0};

public : 
int *heap_ptr{nullptr};

// Method for Accessing const object attributes.
int get_height() const;   

// Static Member Method
static int get_num();  

private :    // We could have also made it public
static int num;   // this is a static member variable can only be accessed by static method.

 



/*

Person();  // Default Constructor
Person(uint8_t h,uint8_t w,string n); // Default Constructor with parameters

*/ 
public :
Person();

// Using One Constructor for initializing Object Parameters
Person(int h,int w=0);


// Copy Constructor
Person(const Person &source);

// Move Constructor
Person(Person &&source);

// Destructor
~Person();


};