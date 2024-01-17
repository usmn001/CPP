/**
 * Simple C++ class for representing a Cube.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include "Cube.h"
#include<math.h>
namespace uiuc{
double Cube::getVolume() {
  return pow(length_new,3);
}

double Cube::getSurfaceArea() {
  return 6 * pow(length_new,2);
}

void Cube::setLength(double length) {
  length_new = length;
}

}