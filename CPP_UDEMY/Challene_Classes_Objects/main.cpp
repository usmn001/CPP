
/*********Section : Challenge *********************/


#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include "Movies.h"

using std::cout;
using std::cin;
using std::vector;
using std::string;




int main()
{
Movies c1;
c1.Add("Halo","PG",1);
c1.Inc_Count("Halo",3);
c1.Display();

c1.Add("Shrek","PG",1);
c1.Inc_Count("Shrek",3);
c1.Display();

c1.Add("Shrek","PG",1);
return 0;

}


