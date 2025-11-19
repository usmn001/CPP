/**
 * @file HSLAPixel.h
 *
 * @author University of Illinois CS 225 Course Staff
 * @version 2018r1-lab1 - Updated for CS 400
 */

#pragma once

#include <iostream>
#include <sstream>

namespace uiuc {
class HSLAPixel{
  // Put your HSLAPixel class definition here.
  // (Remember to end it with a semicolon!)
public:  
    double h; /**< Hue of the pixel, in degrees [0, 360). */
    double s; /**< Saturation of the pixel, [0, 1]. */
    double l; /**< Luminance of the pixel, [0, 1]. */
    double a; /**< Alpha of the pixel, [0, 1]. */
  
};
}
