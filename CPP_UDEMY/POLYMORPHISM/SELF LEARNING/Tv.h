

#ifndef __Tv__
#define __Tv__


#include<stdlib.h>
#include<stdint.h>
#include<stdio.h>
#include<string>
#include "I_Tv.h"

using std::string;

class Tv : public I_Tv
{       

protected : 
static constexpr uint8_t def_length = 0;
static constexpr uint8_t def_width = 0;
static constexpr char *def_screen_resolution = "None";
static constexpr uint8_t def_refresh_rate = 0;
static constexpr uint8_t def_channels = 0;


public : 
uint8_t length = def_length;
uint8_t width = def_width;
string screen_resolution = def_screen_resolution ;
uint8_t refresh_rate = def_refresh_rate;
uint8_t channels = def_channels;

public :
void print(ostream &os) const override;
bool increase_volume()override;
bool decrease_volume()override;
bool next_channel() override;
bool prev_channel() override;

virtual ~Tv();



};

#endif 