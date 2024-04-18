#include "Man.h"


// Derived Class Constructor Invoking Base Class COnstructor, Base Class Constructor Is Called First then 
// derived class constructor is invoked
Man::Man(uint8_t age1,uint8_t working_hours1,uint8_t sleep_time1,char *name1,uint8_t height,uint8_t waist):Person(height,waist,name1),
         age{age1} ,working_hours{working_hours1},sleep_time{sleep_time1},name{nullptr}
{  
this->name = new char [strlen(name1) +1 ];    
strcpy(this->name,name1);
cout<<"Derived Class Constructor Is Called \n";
}

Man::Man(const Man &src):Man(src.age,src.working_hours,src.sleep_time,src.name)
{
cout<<"Derived Class Copy Constructor Invoked \n";
}


Man & Man :: operator = (const Man &src)
{
cout<<"Derived Class Assignment Operator Called \n";
if(this==&src)
{
    return *this;
}

this->sleep_time = 56;
this->age = src.age;
this->working_hours = 40;
this->name = nullptr;
this->name = new char [strlen(src.name) +1 ];
strcpy(this->name,name);
Person::operator=(src);   // Base Class Copy Assignment Operator Invoked
return *this; 
}


Man::~Man(){
cout<<"Derived Class Destructor Called \n";    
delete this->name;
}
