
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <cstring>
using std::cout;
using std::string;
class Base
{
public :
Base();
virtual string get_noise();
virtual uint8_t get_num_legs();
virtual ~Base();
};


