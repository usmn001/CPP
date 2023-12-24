/**
 * Simple C++ class for representing a Cube.
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

// All header (.h) files start with "#pragma once":
#include <stdint.h>
#pragma once

// A class is defined with the `class` keyword, the name
// of the class, curly braces, and a required semicolon
// at the end:

  class Pair {
  public:
   int *pa,*pb;
   Pair(int, int);
   Pair(const Pair &);
   ~Pair();
  };