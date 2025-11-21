
/******************     Code Implementing Unary & Binary Member & Global Operators     *********************/                           
                                 


#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include <cstring>
#include "Mystring_G.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;


int main()
{

Mystring_G a{"USMAN"};
Mystring_G b{"MEHWISH"};

cout<<(a==b)<<"\n";
cout<<(a!=b)<<"\n";
cout<<(a<b)<<"\n";
cout<<(a>b)<<"\n";


Mystring_G s1{"USMAN"};
s1 = -s1;
cout<<s1<<"\n";

s1 =s1+ "*********";  // s1.operator+("*********")
cout<<s1<<"\n";



s1 += "------";   
cout<<s1<<"\n";

Mystring_G s2{"12345"};
s1=s2*5;
cout<<s1<<"\n";


Mystring_G s3{"abcdef"};    
s3*=5;                    
cout<<s3<<"\n";           


Mystring_G s = "Frank";
++s;                   // Will be calling pre increment operator
cout<<s<<"\n";


s=-s;
cout<<s<<"\n";


Mystring_G result;
result = ++s;          // Will be calling pre increment operator, then copy assignment operator, then destructor   
cout<<"\n"<<s<<"\n";
cout<<result<<"\n";


s = "Frank";
s++;
cout<<s<<"\n";


s=-s;
cout<<s<<"\n";
result=s++;
cout<<s<<"\n";
cout<<result<<"\n";


return 0;
}


