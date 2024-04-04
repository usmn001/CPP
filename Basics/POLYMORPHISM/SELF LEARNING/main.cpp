
/******************     Code Implementing Unary & Binary Member & Global Operators     *********************/                           
                                 


#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include <cstring>
#include "Base.h"         // Derived Class
#include "Derived.h"      // Base Class

#include "Tv.h"     // Class Tv is derived from Interface class I_Tv
#include "Lcd.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;


int main()
{
Base *ptr1 = new Derived();  // Here we are creating a derived object on heap and then later returning a pointer
ptr1->get_noise();
delete ptr1;




Lcd l1(0);
I_Tv *lcd_ptr = &l1;
lcd_ptr->decrease_volume();
cout<<*lcd_ptr;










return 0;
}


