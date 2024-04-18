#ifndef I_Tv_H
#define I_Tv_H

#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>
#include<iostream>
#include<string>

using std::cout;
using std::ostream;
using std::string;

// This is my Abstract Base Interface Class With Pure Virtual Functions

class I_Tv 
{
friend ostream & operator<<(ostream &os,const I_Tv &ref);

public : 

virtual bool increase_volume() = 0;   // Pure Virtual Function
virtual bool decrease_volume() = 0;   // Pure Virtual Function
virtual bool next_channel() = 0;      // Pure Virtual Function
virtual bool prev_channel() = 0;      // Pure Virtual Function
virtual void print(ostream &os) const = 0 ;




};


#endif














