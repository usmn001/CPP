/**
 * C++ code for creating a Cube of length 2.4 units.
 * - See ../cpp-std/main.cpp for a similar program with print statements.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>
#include <stdint.h>
#include "Cube.h"
using std::cout;
using std::endl;
using uiuc::Cube;

Cube * CreateUnitCube()
{
Cube  *ptr=new Cube[sizeof(Cube)];               // Here we have allocated heap to class Cube
(*ptr).setLength(15);
cout<< " Size of heap = "<<sizeof(*ptr)<<endl;   // Here we are getting size of memory allocated to Cube class, Equal to it´s private member double type variable length_new 
return ptr;
}





int main() {
 
  Cube * c = CreateUnitCube();
  double area = c->getSurfaceArea();
  double vol = c->getVolume();
  cout << "Surface Area : " << area << endl;
  cout << "Volume: " << vol << endl;
  cout << "Cube c pointer address is : "<<&c<<endl;
  delete[] c;
  return 0;
}
