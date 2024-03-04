
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
using std::string;


class Person{

public :
uint8_t height{0};
uint8_t waist {0};
string name;

/*

Person();  // Default Constructor
Person(uint8_t h,uint8_t w,string n); // Default Constructor with parameters

*/ 

// Using One Constructor for initializing Object Parameters
Person(uint8_t height=190,uint8_t waist = 0,string name="None");


// Copy Constructor
Person(const Person &source);

// Destructor
~Person();


};