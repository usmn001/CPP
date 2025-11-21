
#pragma once

#include "Base.h"
#include <string.h>

using std::string;
using std::cout;

class Derived:public Base
{
public :

Derived();
string get_noise() override;
uint8_t get_num_legs() override;

virtual ~Derived();
  
};