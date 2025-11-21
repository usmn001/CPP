#pragma once

#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
#include <vector>
#include "Movie.h"

using std::string;
using std::vector;

class Movies
{
public :
vector<Movie> m_collection;

void Add(string name,string rating,int count);
void Inc_Count(string name,int wcnt);
void Display();


Movies();



};

