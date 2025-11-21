
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <cstring>
#include "Person.h"

class Man:public Person
{

public : 
uint8_t age{0};
uint8_t working_hours{0};
uint8_t sleep_time{0};
char *name;

uint8_t display();

public :
Man(uint8_t age1=0,uint8_t working_hours1=0,uint8_t sleep_time1=0,char *name1="None",uint8_t height=0,uint8_t waist=0);
Man & operator=(const Man &source);
Man(const Man &src);
~Man();

};