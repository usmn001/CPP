#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <cstring>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::ostream;
using std::strcat;
using std::strcmp;
using std::strlen;
using std::string;


class Mystring_G
{

public :
char *str;      // C style string.

public : 

Mystring_G();

// Using One Constructor for initializing Object Parameters
Mystring_G(const char *s);

// Copy Constructor
Mystring_G(const Mystring_G &source);

// Move Constructor
Mystring_G(Mystring_G &&source);

// Copy Assignment Operator
Mystring_G & operator=(const Mystring_G &src);

// Move Assignment Operator
Mystring_G & operator=(Mystring_G &&src);


/*************Overloading Operators Declarations As Friend Methods******************/

// Unary Operator Non Member Method Implementing Conversion of C Style String From Upper Case To Lower Case
friend Mystring_G operator-(const Mystring_G &obj);

// Unary Operator Non Member Method Implementing Conversion of C Style String From Lower Case To Upper Case
friend Mystring_G operator+(const Mystring_G &obj);

// Binary Operator - Non Member Method ,// Not Implemented yet
friend Mystring_G operator-(const Mystring_G &lhs, const Mystring_G &rhs);

// Binary Operator + Non Member Method Implementing Operation On Two Objects.
friend Mystring_G operator+(const Mystring_G &lhs, const Mystring_G &rhs)  ;

// Binary Member += Operator Non Member Method
friend Mystring_G & operator+=(Mystring_G &lhs, const Mystring_G &rhs);

// Binary Operator *Non Member Method Implementing Operation On Two Objects.
friend Mystring_G operator*(Mystring_G &rhs,int a);

// Binary Member *= Operator Non Member Method
friend Mystring_G operator*=(Mystring_G &rhs,int a); 

// Non Member Pre Increment Operator++
friend Mystring_G & operator++(Mystring_G &obj);  

// Non Member Post Increment Operator++
friend Mystring_G operator++(Mystring_G &obj,int);  



// Binary Operator == Non Member Method 
friend bool operator==(const Mystring_G &lhs,const Mystring_G &rhs);

// Binary Operator != Non Member Method 
friend bool operator!=(const Mystring_G &lhs,const Mystring_G &rhs);

// Binary Operator > Non Member Method 
friend bool operator>(const Mystring_G &lhs,const Mystring_G &rhs);

// Binary Operator < Non Member Method 
friend bool operator<(const Mystring_G &lhs,const Mystring_G &rhs);


/*************Input and Output Streams**************/

friend std::ostream & operator<<(std::ostream &os,const Mystring_G &obj);

// Destructor
~Mystring_G();


};
