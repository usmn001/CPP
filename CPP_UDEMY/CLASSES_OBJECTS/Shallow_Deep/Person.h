
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
using std::string;


class Person{

public :
int height{0};
int waist{0};

public : 
int *heap_ptr{nullptr};


public :
int get_height() const;
static int num;

static int get_num();



/*

Person();  // Default Constructor
Person(uint8_t h,uint8_t w,string n); // Default Constructor with parameters

*/ 

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