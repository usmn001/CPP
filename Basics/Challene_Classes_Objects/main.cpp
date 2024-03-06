
/*********Section : Challenge *********************/


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


void display(Person p1);


// Function Definition
void display(Person p3)
{
cout<<"Height Of Object P3 : "<<*p3.heap_ptr<<"\n";
}

int main()
{


// Making a object const at the time of declaration
const Person p1{38,32};

display(p1);

Person p2{p1};  


// Using const qualifier on class member method.
int h=p1.get_height();



cout<<"Height Of Object 1 : "<<p1.height<<"\n";
cout<<"Waist Of Object 1 : "<<p1.waist<<"\n";
cout<<"Object 1 Data On Heap : "<<*p1.heap_ptr<<"\n";


cout<<"Height Of Object 2 : "<<*p2.heap_ptr<<"\n";
cout<<"Waist Of Object 2 : "<<p2.waist<<"\n";
cout<<"Object 2 Data On Heap :"<<*p2.heap_ptr<<"\n";

cout<<"Object P1 Heap Pointer : "<<p1.heap_ptr<<"  Object P2 Heap Pointer : "<<p2.heap_ptr<<"\n";

// Move Constructor 
vector <Person> vec;
vec.push_back(Person{10});




// Static Member Method and Variable : Number Of Objects Created

cout<<"Number Of Objects Created : "<<Person::get_num()<<"\n";



return 0;

}


