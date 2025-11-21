
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
using std::string;


class Person{

public :
int height{0};
int waist {0};
int *data {nullptr}; 
string name;


/*

Person();  // Default Constructor
Person(int h,int w,string n); // Default Constructor with parameters

*/ 

// Using One Constructor for initializing Object Parameters
Person(int height=190,int waist = 0,string name="None");


// Copy Constructor
Person(const Person &source);

// Move Constructor
Person(Person &&source);

// Destructor
~Person();


};