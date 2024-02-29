/*
 * LCD.h
 *
 *  Created on: 28/02/2024
 *      Author: musman
 */

#ifndef LCD_H_
#define LCD_H_

#include<stdlib.h>
#include<vector>
#include<iostream>
using std::vector;

class LCD {

public:
	LCD();
	virtual ~LCD();
	void Channel();
	int GetHeight();

private :
	int height;
	vector<int> numbers = {1,2,3,4,5};

};

#endif /* LCD_H_ */
