
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
using std::string;


class Movie
{

public :
string name;
string rating;
int watched{0};

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
Movie();

// Using One Constructor for initializing Object Parameters
Movie(int h,int w=0);


// Copy Constructor
Movie(const Movie &source);

// Move Constructor
Movie(Movie &&source);

// Destructor
~Movie();


};