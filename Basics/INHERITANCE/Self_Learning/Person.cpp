#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <cstring>
#include "Person.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::ostream;


// Using One Constructor Instead of so many overloaded constructors

Person::Person(uint8_t h,uint8_t w,char *s):str{nullptr},height{h},waist{w}
{

str = new char ( strlen(s) +1 );
strcpy(str,s);
cout<<"Base Class Constructor called with initializer list \n";
}


// Deep Copy Constructor

Person::Person(const Person &source):Person(source.height,source.waist,source.str)
{
cout<<"Base Class Deep Copy Constructor is called \n";
}


// Move Constructor Only Used On R Values

Person::Person(Person &&source):waist{source.waist},height{source.height},str{nullptr}
{
cout<<"Move Constructor is called \n";
str = new char(strlen(source.str)+1);
strcpy(str,source.str);
}

// Copy Assignment Operator
Person & Person::operator=(const Person &src)
{
  if(this==&src){
    return *this;
  }
str = new char (strlen(src.str)+1);
this->height=src.height;
this->waist = src.waist;
strcpy(this->str,src.str);
return *this;
}

// Move Assignment Operator
Person & Person::operator=(Person &&src)
{
    if(this==&src)
  {
    return *this;
  }
this->height=src.height;
this->waist = src.waist;
strcpy(this->str,src.str);
src.heap_ptr = nullptr;
src.str = nullptr;
src.height = 0;
src.waist = 0;
return *this;  

}

/**********Unary Operators Definitions***********/


Person Person::operator-() 
{
   char *buff = new char(strlen(str)+1);      
   std::strcpy(buff,str);
   for( int i=0;i<=(strlen(str)+1);i++) 
   {
    buff[i] = std::tolower(buff[i]);    
   }
Person temp(height,waist,buff);

delete[] buff;
return temp;
}

Person Person::operator+()                
{
   char *buff = new char(strlen(str)+1);      
   std::strcpy(buff,str);
   for( int i=0;i<( strlen(str))+1;i++) 
   {
    buff[i] = std::toupper(buff[i]);
   }
Person temp(height,waist,buff);

delete[] buff;
return temp;
}


/********Binary Operators Definitions As Member Methods Of Class ******** */



Person Person::operator+(const Person &rhs)   // Here we want to perform string concatenation on object char parameter
                                              // 
{

if(*this==rhs){
return *this;
}
char *buff = new char( strlen(rhs.str) + strlen(str) + 1); 
strcpy(buff,str);
strcat(buff,rhs.str);
Person temp(height,waist,buff);   // This statement calls copy constructor which delegates itś role to overloaded default constructor.
delete buff;
return temp;     // This statement here is calling move constructor 
}


bool Person::operator==(const Person &rhs)
{

if ( (strcmp(this->str,rhs.str)==0) && (this->height==rhs.height) && (this->waist==rhs.waist)  )
{
return true;
}
else
return false;
}


bool Person::operator!=(const Person &rhs)
{

if ( (strcmp(this->str,rhs.str)!=0) && (this->height!=rhs.height) && (this->waist!=rhs.waist)  )
{
return true;
}
else
return false;
}

// Binary Operator > Member Method 
bool Person::operator>(const Person &rhs)
{

if ( (strcmp(this->str,rhs.str)>0) && (this->height>rhs.height) && (this->waist>rhs.waist)  )
{
return true;
}
else
return false;
}


// Binary Operator < Member Method 
bool Person::operator<(const Person &rhs)
{

if ( (strcmp(this->str,rhs.str)<0) && (this->height<rhs.height) && (this->waist<rhs.waist)  )
{
return true;
}
else
return false;
}







/*********************Global Operators*********************/



// Unary Operator Global Method Implementation

Person operator-(const Person &obj)
{

char *buff = new char(strlen(obj.str)+1);      
   std::strcpy(buff,obj.str);
   for( int i=0;i<=(strlen(obj.str)+1);i++) 
   {
    buff[i] = std::tolower(buff[i]);    
   }
Person temp(obj.height,obj.waist,buff);
delete[] buff;
return temp;
}


// Binary Operator Global Method Implementation

Person operator+(const Person &lhs,const Person &rhs)   // Here we want to perform string concatenation on object char parameter
                                                        // 
{

if(lhs==rhs){
return lhs;
}
char *buff = new char( strlen(rhs.str) + strlen(lhs.str) + 1); 
strcpy(buff,lhs.str);
strcat(buff,rhs.str);
int h_n = lhs.height + rhs.height;
int w_n = lhs.waist + rhs.waist;
Person temp(h_n,w_n,buff);   // This statement calls copy constructor which delegates itś role to overloaded default constructor.
delete buff;
return temp;     // This statement here is calling move constructor 
}

// Bool Binary Operator == Global Method Implementation

bool operator==(const Person &lhs,const Person &rhs)
{

if ( (strcmp(lhs.str,rhs.str)==0) && (lhs.height==rhs.height) && (lhs.waist==rhs.waist)  )
{
return true;
}
else
return false;
}


// Bool Binary Operator > Global Method Implementation

bool operator>(const Person &lhs,const Person &rhs)
{

if ( (lhs.height>rhs.height) && (lhs.waist>rhs.waist)  )
{
return true;
}
else
return false;
}

/***********Stream Insertion & Extraction Operator Methods Definitions************/

std::ostream & operator<<(std::ostream &os,const Person &obj)
{
os<<"Name Of Person : "<<obj.str<<"\n";  
os<<"Height Of Person : "<<obj.height<<"\n";
os<<"Waist Of Person : "<<obj.waist<<"\n";
return os;
}


std::istream & operator>>(std::istream &is,Person &obj)
{
int height{0};
int waist{0};
is>>height;
is>>waist;
obj = Person(height,waist);

return is;
}






// Destructor
Person::~Person()
{
cout<<"Base Class Destructor Called"<<"\n";
delete str;
}

// Class Member Method
int Person::get_height() const   // If we don´t use const keyword then we cannot access object attribute
{
return height;  
}



