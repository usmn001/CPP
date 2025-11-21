#include "Cube.h"
#include <stdint.h>
#include <iostream>
#include<math.h>
using std::cout;
using std::endl;

namespace uiuc{

 Cube::Cube(){                                  // Custom Default Constructor
  length_new = 1;
  cout<<"Default Constructor Is Invoked"<<endl;
 }

 
 Cube::Cube(const Cube &obj){                  // Custom Copy Constructor
  length_new = obj.length_new;
  cout<<"Copy Constructor Is Invoked"<<endl;
 }

Cube::~Cube(){
  cout<<"Destructor Is Invoked"<<endl;
}

Cube & Cube::operator=(const Cube &obj){       // Custom Copy Assignment Operator
  length_new = obj.length_new;
  cout<<"Copy Assignment Operator Is Invoked"<<endl;
  return *this;
 }

double Cube::getVolume() {
  return pow(length_new,3);
}

double Cube::getSurfaceArea() {
  return 6 * pow(length_new,2);
}

void Cube::setLength(uint8_t length) {
  length_new = length;
}

}