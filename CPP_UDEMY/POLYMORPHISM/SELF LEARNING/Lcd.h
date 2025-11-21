
#ifndef LCD_H
#define LCD_H

#include "Tv.h"

#include<stdio.h>
#include<iostream>

class Lcd:public Tv
{

protected : 
static constexpr uint8_t max_volume = 20;
static constexpr uint8_t max_channels = 200;

public : 

virtual bool increase_volume() override;
virtual bool decrease_volume() override;

virtual bool next_channel() override;
virtual bool prev_channel() override;
virtual void print(ostream &os) const override;


Lcd(uint8_t length=def_length,uint8_t width=def_width,string screen_resolution=def_screen_resolution,
    uint8_t refresh_rate=def_refresh_rate,uint8_t channels=def_channels);

virtual ~Lcd();


};

#endif