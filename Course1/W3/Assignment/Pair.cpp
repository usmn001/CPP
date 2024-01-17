#include "Pair.h"
#include <stdint.h>
#include <iostream>
#include<math.h>
using std::cout;
using std::endl;


Pair::Pair(int a,int b){
pa = new int(a);
pb = new int(b); 
}

Pair::Pair(const Pair &obj){
pa = new int(*(obj.pa));
pb = new int(*(obj.pb));
}


 Pair::~Pair(){
   delete(pa);
   delete(pb);
 }