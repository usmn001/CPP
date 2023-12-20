#include "Cube.h"
#include <stdint.h>
#include<math.h>
namespace uiuc{

 Cube::Cube(){
  length_new = 1;
 }

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