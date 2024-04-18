#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include "Movie.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;

Movie::Movie(string name,string rating,int cnt):name{name},rating{rating},cnt{cnt}
{




}

Movie::Movie(const Movie &source):name{source.name},rating{source.rating},cnt{source.cnt}
{




}





Movie::~Movie()
{

}
