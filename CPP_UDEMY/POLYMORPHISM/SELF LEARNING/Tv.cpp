
#include "Tv.h"


void Tv::print(ostream &os) const 
{
os<<"Hello \n";
}

bool Tv::increase_volume()
{
cout<<"Volume Increased \n";
return true;
}


bool Tv::decrease_volume()
{
cout<<"Volume Decreased \n";
return true;
}

bool Tv::next_channel()
{
cout<<"Next Channel \n";
return true;
}

bool Tv::prev_channel()

{
cout<<"Previous Channel \n";
return true;
}


Tv::~Tv()
{
cout<<"Tv Abstract Class Destructor Called \n";
};