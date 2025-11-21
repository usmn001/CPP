#include "Base.h"





Base::Base()
{
cout << "Constructing base\n"; 
}


string Base::get_noise()
{
   return "OOOOOO";
}

uint8_t Base::get_num_legs()
{
    return 6;
}


Base::~Base()
{
cout << "Destructor Base\n";
}