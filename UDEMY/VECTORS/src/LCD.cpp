/*
 * LCD.cpp
 *
 *  Created on: 28/02/2024
 *      Author: musman
 */

#include "LCD.h"
using std::vector;
using std::cout;
using std::cin;
using std::endl;

LCD::LCD():height(0) {
	// TODO Auto-generated constructor stub

}

LCD::~LCD() {
	// TODO Auto-generated destructor stub
}

void LCD::Channel()
{

for(auto n : numbers)
{
cout<<"Channel : "<<n<<"\n";
}

}


int LCD::GetHeight()
{
	return height;
}

