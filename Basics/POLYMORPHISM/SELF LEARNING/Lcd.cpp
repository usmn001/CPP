#include "Lcd.h"


using std::cout;


Lcd::Lcd(uint8_t length,uint8_t width,string screen_resolution,uint8_t refresh_rate,uint8_t channels)
{

}


bool Lcd::increase_volume()
{
cout<<"Volume Increased \n";
return true;
}


bool Lcd::decrease_volume()
{
cout<<"Volume Decreased \n";
return true;
}

bool Lcd::next_channel()
{
cout<<"Next Channel \n";
return true;
}

bool Lcd::prev_channel()

{
cout<<"Previous Channel \n";
return true;
}

void Lcd::print(ostream &os) const 
{
os<<"In LCD Derived Print Method \n";
}

Lcd::~Lcd()
{
cout<<"LCD Derived Class Virtual Destructor Called \n";
}