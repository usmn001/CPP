
#include <iostream>
#include <stdlib.h>
#include <stdint.h>
#include <vector>
#include "Pair.h"
using std::cout;
using std::endl;

/* Class Pair has already been declared
 * as shown in the following comments:
  */


int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);

  delete hp;
  
  std::cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." << std::endl;
  return 0;
}