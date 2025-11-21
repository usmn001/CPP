
/******************     Code Implementing Unary & Binary Member & Global Operators     *********************/                           
                                 


#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include <cstring>
#include "Man.h"         // Derived Class
#include "Person.h"      // Base Class

using std::cout;
using std::cin;
using std::vector;
using std::string;


int main()
{

cout.precision(2);

Man m1{38,40,56,"USMAN",200,40};    // Calling Derived Class Constructor which will first call base 
                                    // class constructor and then attributes of derived class are initialized.

Man m2=m1;
return 0;
}


