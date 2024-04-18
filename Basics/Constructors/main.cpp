#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include "Person.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;



int main()
{

{

Person p1;               
Person p2 {170,32,"usman"};


Person *p3_ptr{nullptr};

p1.height = 160;
p1.waist = 42;

p2.height = 170;
p2.waist = 39;

// Calling Copy Constructor
Person P3 (p2);

// Putting Objects in the array.
Person arr_p[] = {p1,p2};

arr_p[0].height = 190;
arr_p[0].waist = 90;

// Allocating Heap for class objects
p3_ptr = (Person*)new(Person);

p3_ptr->name="USMAN";
p3_ptr->height = 90;
p3_ptr->waist = 34;


// We can also access object pointer p3_ptr members like 

(*p3_ptr).height = 100;
(*p3_ptr).waist = 32;

delete p3_ptr;

vector<Person> vec_name{} ;
vec_name.push_back(p1);
vec_name.push_back(p2);


}
 // When we get out of scope destructors are called and we cannot access objects p1,p2,p3_ptr






return 0;

}


