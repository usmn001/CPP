#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>

using std::cout;
using std::cin;
using std::vector;
using std::string;

class Person{

public :
uint8_t height{0};
uint8_t waist {0};
string name;

};


int main()
{



Person p1;
Person p2;
Person *p3_ptr{nullptr};

p1.height = 160;
p1.waist = 42;

p2.height = 170;
p2.waist = 39;


Person arr_p[] = {p1,p2};


arr_p[0].height = 190;
arr_p[0].waist = 90;

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


uint8_t *ptr = (uint8_t*) new uint8_t [sizeof(uint8_t)*2];

cout<<sizeof(*ptr)<<"\n";


*ptr = 10;
*(ptr+1) = 20;
*(ptr+2) = 30;

uint8_t *ptr1 = (uint8_t*) malloc(sizeof(uint8_t)*2);
delete ptr1;


return 0;

}


