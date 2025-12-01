#include "Mystring.h"


//Default constructor
Mystring::Mystring()
{
cout<<"Default Constructor Invoked";
}


// Overloaded Constructor With Parameter
Mystring::Mystring(const char *s):str{nullptr}
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
Mystring::Mystring(const Mystring &source)
{
this->str=new char[strlen(source.str)+1];
strcpy(this->str,source.str);  
cout<<"Copy Constructor is called \n";
}


// Move Constructor Only Used On R Values
Mystring::Mystring(Mystring &&source):str{nullptr}
{
cout<<"Move Constructor is called \n";
str = new char[strlen(source.str)+1];
strcpy(str,source.str);
source.str=nullptr;
}


/******************Binary Overloaded Operator Member Methods************/

// Binary Member == Operator Method
bool Mystring::operator==(const Mystring &rhs)
{
if(strcmp(str,rhs.str)==0){
  return true;
}
else 
return false;
}


// Binary Member != Operator Method
bool Mystring::operator!=(const Mystring &rhs)
{
if(strcmp(str,rhs.str)!=0){
  return true;
}
else 
return false;
}


// Binary Member < Operator Method
bool Mystring::operator<(const Mystring &rhs)
{
if(strcmp(str,rhs.str)<0){
  return true;
}
else 
return false;
}


// Binary Member > Operator Method
bool Mystring::operator>(const Mystring &rhs)
{
if(strcmp(str,rhs.str)>0){
  return true;
}
else 
return false;
}


// Unary Member - Operator Member Method
Mystring Mystring::operator-()
{
   for( int i=0;i<=(strlen(str)+1);i++) 
   {
    str[i] = tolower(str[i]);    
   }
Mystring temp{str};
return temp;
}



// Binary Member + Operator Method
Mystring Mystring::operator+(const Mystring &rhs) const   // Here we want to perform string concatenation on object char parameter
                                              
{
size_t buff_size = strlen(rhs.str) + strlen(this->str) + 1;
char *buff = new char[buff_size]; 
strcpy(buff,this->str);
strcat(buff,rhs.str);
delete[] rhs.str;
Mystring temp(buff);   // This statement calls overloaded constructor
delete[] buff;
return temp;     // This statement here is calling move assignment operator method 
}

// Binary Member += Operator Method
Mystring & Mystring::operator+=(const Mystring &rhs)   // Here we want to perform string concatenation on object char parameter
                                              
{
*this = *this +rhs;
return *this;     // This statement here is calling move assignment operator method 
}


// Binary Member * Operator Member Method
Mystring Mystring::operator*(int a)   // Here we want to perform string concatenation on object char parameter
                                              
{
char *buff = new char[(strlen(str)*a + 1) ]; 
strcpy(buff,str);

for(int i=1;i<a;i++)
{
strcat(buff,str);
}
Mystring temp(buff);   // This statement calls overloaded constructor
delete[] buff;
return temp;     // This statement here is calling move assignment operator method 
}


// Binary Member *= Operator Member Method
Mystring Mystring::operator*=(int a)   // Here we want to perform string concatenation on object char parameter
                                              
{
*this = *this*a;   
return *this;
}




// Pre Increment Operator
Mystring & Mystring ::operator++()
{
   for(size_t i=0;i<strlen(this->str);i++){
    this->str[i]=toupper(this->str[i]);
   }
   return *this;
}


// Post Increment Operator ++
Mystring  Mystring:: operator++(int)
{
Mystring temp = *this;
operator++();
return temp;
}


// Copy Assignment Operator
Mystring & Mystring::operator=(const Mystring &src)
{
    if(this==&src)
  {
    return *this;
  }
this->str = new char[strlen(src.str)+1];
strcpy(this->str,src.str);
return *this;  
}


// Move Assignment Operator
Mystring & Mystring::operator=(Mystring &&src)
{
    if(this==&src)
  {
    return *this;
  }
this->str = new char[strlen(src.str)+1];
strcpy(this->str,src.str);
src.str=nullptr;
return *this;  
}

// Output stream Insertion << Operator Non Member friend method
std::ostream & operator<<(std::ostream &os,const Mystring &obj)
{
os<<obj.str;
return os;
}

// Destructor
Mystring::~Mystring(){
cout<<"Destructor Called"<<"\n";
delete[] this->str;
}