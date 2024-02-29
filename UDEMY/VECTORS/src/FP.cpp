//============================================================================
// Name        : FP.cpp
// Author      : M USMAN
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LCD.h"

using namespace std;

int main() {
    LCD l1;
    l1.Channel();
    cout<<l1.GetHeight();
	return 0;
}
