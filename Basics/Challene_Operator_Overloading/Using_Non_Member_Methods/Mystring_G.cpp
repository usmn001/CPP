#include "Mystring_G.h"


//Default constructor
Mystring_G::Mystring_G()
{
cout<<"Default Constructor Invoked";
}


// Overloaded Constructor With Parameter
Mystring_G::Mystring_G(const char *s):str{nullptr}
{
if(s==nullptr)
{
str = new char[1];
*str='\0';
}
else
{
str = new char [strlen(s) +1 ];
strcpy(str,s);
}
cout<<"Constructor called with initializer list \n";
}


// Deep Copy Constructor
Mystring_G::Mystring_G(const Mystring_G &source)
{
this->str=new char[strlen(source.str)+1];
strcpy(this->str,source.str);  
cout<<"Copy Constructor is called \n";
}


// Move Constructor Only Used On R Values
Mystring_G::Mystring_G(Mystring_G &&source):str{nullptr}
{
cout<<"Move Constructor is called \n";
str = new char[strlen(source.str)+1];
strcpy(str,source.str);
source.str=nullptr;
}


/******************Binary Overloaded Operator Member Methods************/

// Binary Member == Operator Method
bool operator==(const Mystring_G &lhs,const Mystring_G &rhs)
{
if(strcmp(lhs.str,rhs.str)==0){
  return true;
}
else 
return false;
}


// Binary Member != Operator Method
bool operator!=(const Mystring_G &lhs,const Mystring_G &rhs)
{
if(strcmp(lhs.str,rhs.str)!=0){
  return true;
}
else 
return false;
}


// Binary Member < Operator Method
bool operator<(const Mystring_G &lhs,const Mystring_G &rhs)
{
if(strcmp(lhs.str,rhs.str)<0){
  return true;
}
else 
return false;
}


// Binary Member > Operator Method
bool operator>(const Mystring_G &lhs,const Mystring_G &rhs)
{
if(strcmp(lhs.str,rhs.str)>0){
  return true;
}
else 
return false;
}


// Unary Member - Operator Member Method
Mystring_G operator-(const Mystring_G &rhs)
{
   for( int i=0;i<=(strlen(rhs.str)+1);i++) 
   {
    rhs.str[i] = tolower(rhs.str[i]);    
   }
Mystring_G temp{rhs.str};
return temp;
}


// Unary Member + Operator Member Method
Mystring_G operator+(const Mystring_G &rhs)
{
   for( int i=0;i<=(strlen(rhs.str)+1);i++) 
   {
    rhs.str[i] = toupper(rhs.str[i]);    
   }
Mystring_G temp{rhs.str};
return temp;
}

// Binary Member + Operator Method
Mystring_G operator+(const Mystring_G &lhs,const Mystring_G &rhs)    // Here we want to perform string concatenation on object char parameter
                                              
{
size_t buff_size = strlen(lhs.str) + strlen(rhs.str) + 1;
char *buff = new char[buff_size]; 
strcpy(buff,lhs.str);
strcat(buff,rhs.str);
delete[] rhs.str;
Mystring_G temp(buff);   // This statement calls overloaded constructor
delete[] buff;
return temp;     // This statement here is calling move assignment operator method 
}

// Binary Member += Operator Method
Mystring_G & operator+=(Mystring_G &lhs,const Mystring_G &rhs)   // Here we want to perform string concatenation on object char parameter
                                              
{
lhs = lhs +rhs;
return lhs;     // This statement here is calling move assignment operator method 
}


// Binary Member * Operator Member Method
Mystring_G operator*(Mystring_G &rhs,int a)   // Here we want to perform string concatenation on object char parameter n times
                                              
{
char *buff = new char[(strlen(rhs.str)*a + 1) ]; 
strcpy(buff,rhs.str);

for(int i=1;i<a;i++)
{
strcat(buff,rhs.str);
}
Mystring_G temp(buff);   // This statement calls overloaded constructor
delete[] buff;
return temp;     // This statement here is calling move assignment operator method 
}


// Binary Member *= Operator Member Method
Mystring_G operator*=(Mystring_G &rhs,int a)   // Here we want to perform string concatenation on object char parameter
                                              
{
rhs = rhs*a;   
return rhs;
}

// Pre Increment Operator
Mystring_G & operator++(Mystring_G &obj)
{
   for(size_t i=0;i<strlen(obj.str);i++){
    obj.str[i]=toupper(obj.str[i]);
   }
   return obj;    // Returning address  i.e. reference 
}


// Post Increment Operator ++
Mystring_G  operator++(Mystring_G &obj,int)
{
Mystring_G temp = operator++(obj);
return temp;      // Returning by value 
}


// Copy Assignment Operator
Mystring_G & Mystring_G::operator=(const Mystring_G &src)
{
    if(this==&src)
  {
    return *this;
  }
this->str = new char[strlen(src.str)+1];
strcpy(this->str,src.str);
delete[] src.str;
return *this;        // Returning address  i.e. reference of current l-object in scope
}


// Move Assignment Operator
Mystring_G & Mystring_G::operator=(Mystring_G &&src)
{
cout<<"\nMove Assignment Operator Call´d";  
    if(this==&src)
  {
    return *this;
  }
this->str = new char[strlen(src.str)+1];
strcpy(this->str,src.str);
cout<<"\n this.str address = "<<&this->str;
cout<<"\n src.str address = "<<&src.str;
src.str=nullptr;
return *this;         // Returning address of current l-object in scope
}

// Output stream Insertion << Operator Non Member friend method
std::ostream & operator<<(std::ostream &os,const Mystring_G &obj)
{
os<<obj.str;
return os;
}

// Destructor
Mystring_G::~Mystring_G(){
cout<<"\n Destructor Called : "<<&this->str<<"\n";
delete[] this->str;
}