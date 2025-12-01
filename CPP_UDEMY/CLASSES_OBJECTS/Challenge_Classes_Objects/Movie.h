
#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
using std::string;


class Movie
{

public :
string name;
string rating;
int cnt{0};


public :
Movie(string name,string rating,int cnt);


// Copy Constructor
Movie(const Movie &source);


// Destructor
~Movie();


};