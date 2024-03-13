
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
#include <cstring>

using std::string;


class Person
{

public :

int height{0};
int waist{0};
char *str;      // C style string.

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
Person(int h=0,int w=0,char *s="");

// Copy Constructor
Person(const Person &source);

// Move Constructor
Person(Person &&source);

// Copy Assignment Operator
Person & operator=(const Person &src);

// Move Assignment Operator
Person & operator=(Person &&src);

// Unary Operator Member Method Implementing Conversion of C Style String From Upper Case To Lower Case
Person operator-();

// Unary Operator Member Method Implementing Conversion of C Style String From Lower Case To Upper Case
Person operator+();

// Binary Operator - Member Method ,// Not Implemented yet
Person operator-(const Person &rhs);

// Binary Operator + Member Method Implementing Operation On Two Objects.
Person operator+(const Person &rhs);

// Binary Operator == Member Method 
bool operator==(const Person &rhs);


// Unary Operator Global Method Implementing Conversion of C Style String From Upper Case To Lower Case
friend Person operator-(const Person &obj);

// Binary Operator Global Method Implementing Conversion of C Style String From Upper Case To Lower Case
friend Person operator+(const Person &lhs,const Person &rhs);


// Binary Operator == Golbal Member Method 
friend bool operator==(const Person &lhs,const Person &rhs);

// Binary Operator > Golbal Member Method 
friend bool operator>(const Person &lhs,const Person &rhs);

// Destructor
~Person();


};