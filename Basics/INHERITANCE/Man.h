
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
u_int8_t age{0};
u_int8_t working_hours{0};
u_int8_t sleep_time{0};
char *name;

u_int8_t display();

public :
Man(u_int8_t a=0,u_int8_t wh=0,u_int8_t st=0,char *nam ="None");



};