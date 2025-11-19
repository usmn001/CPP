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
namespace uiuc {

class Cube {
  public:  // Public members:
    Cube();
    Cube(const Cube &obj); 
    ~Cube();
    Cube & operator=(const Cube &obj);    
    double getVolume();
    double getSurfaceArea();
    void setLength(uint8_t length);

  private: // Private members:
    double length_new;
};

}