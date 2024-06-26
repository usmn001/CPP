
#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include "Cube.h"
using std::cout;
using std::endl;

using uiuc::Cube;

Cube * CreateUnitCube(Cube)
{
Cube  *ptr=new Cube[sizeof(Cube)];               // Here we have allocated heap to class Cube
(*ptr).setLength(15);
cout<< " Size of heap = "<<sizeof(*ptr)<<endl;   // Here we are getting size of memory allocated to Cube class, Equal to it´s private member double type variable length_new 
return ptr;                                      // Destructor is invoked.
}


void add(Cube &al){
al.setLength(8);

cout<<"Alias used";

}


int main() {
  Cube c;                          // Default Constructor is invoked.
  Cube d ;                         // Default Constructor is invoked.
  d=c;                             // Assignment operator is invoked.                 
  Cube * cn = CreateUnitCube(c);   // Passing argument to function by value.
  Cube & alc = c;                  // Default constructor is already invoked for object as here we have only alias for object c.
  add(alc);  



   //Cube  cn = CreateUnitCube(c);
  double area = cn->getSurfaceArea();
  double vol = cn->getVolume(); 

  /*double area = cn.getSurfaceArea();
  double vol = cn.getVolume();*/
  cout << "Surface Area : " << area << endl;
  cout << "Volume: " << vol << endl;
  //cout << "Cube c pointer address is : "<<&c<<endl;
 
  delete[] cn;                  // Destructor is invoked

  return 0;
}