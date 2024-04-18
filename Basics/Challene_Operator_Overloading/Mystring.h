
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


class Mystring
{

public :
char *str;      // C style string.

public : 

Mystring();

// Using One Constructor for initializing Object Parameters
Mystring(const char *s);

// Copy Constructor
Mystring(const Mystring &source);

// Move Constructor
Mystring(Mystring &&source);

// Copy Assignment Operator
Mystring & operator=(const Mystring &src);

// Move Assignment Operator
Mystring & operator=(Mystring &&src);


/*************Overloading Operators Declarations As Member Methods******************/

// Unary Operator Member Method Implementing Conversion of C Style String From Upper Case To Lower Case
Mystring operator-();

// Unary Operator Member Method Implementing Conversion of C Style String From Lower Case To Upper Case
Mystring operator+();

// Binary Operator - Member Method ,// Not Implemented yet
Mystring operator-(const Mystring &rhs);

// Binary Operator + Member Method Implementing Operation On Two Objects.
Mystring operator+(const Mystring &rhs) const ;

// Binary Member += Operator Method
Mystring & operator+=(const Mystring &rhs);

// Binary Operator * Member Method Implementing Operation On Two Objects.
Mystring operator*(int a);

// Binary Member *= Operator Member Method
Mystring operator*=(int a); 

// Pre Increment Operator++
Mystring & operator++();  

// Post Increment Operator++
Mystring operator++(int);  



// Binary Operator == Member Method 
bool operator==(const Mystring &rhs);

// Binary Operator != Member Method 
bool operator!=(const Mystring &rhs);

// Binary Operator > Member Method 
bool operator>(const Mystring &rhs);

// Binary Operator < Member Method 
bool operator<(const Mystring &rhs);


/*************Input and Output Streams**************/

friend std::ostream & operator<<(std::ostream &os,const Mystring &obj);

// Destructor
~Mystring();


};






