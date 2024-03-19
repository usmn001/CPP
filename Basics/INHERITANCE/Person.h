
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

// Using One Constructor for initializing Object Parameters
Person(u_int8_t h=0,u_int8_t w=0,char *s="None");

// Copy Constructor
Person(const Person &source);

// Move Constructor
Person(Person &&source);

// Copy Assignment Operator
Person & operator=(const Person &src);

// Move Assignment Operator
Person & operator=(Person &&src);


/*************Overloading Operators Declarations As Member Methods******************/

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

// Binary Operator != Member Method 
bool operator!=(const Person &rhs);

// Binary Operator > Member Method 
bool operator>(const Person &rhs);

// Binary Operator < Member Method 
bool operator<(const Person &rhs);









/*************Overloading Operators Declarations As Non Member Friend Methods******************/


// Unary Operator Global Method Implementing Conversion of C Style String From Upper Case To Lower Case
friend Person operator-(const Person &obj);

// Binary Operator Global Method Implementing Conversion of C Style String From Upper Case To Lower Case
friend Person operator+(const Person &lhs,const Person &rhs);


// Binary Operator == Golbal Member Method 
friend bool operator==(const Person &lhs,const Person &rhs);

// Binary Operator > Golbal Member Method 
friend bool operator>(const Person &lhs,const Person &rhs);

/*************Input and Output Streams**************/

friend std::ostream & operator<<(std::ostream &os,const Person &obj);

friend std::istream & operator>>(std::istream &is,Person &obj);

// Destructor
~Person();


};