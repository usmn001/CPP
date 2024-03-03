/*
Write a C++ function swap_pointers that takes two integer pointers as input and swaps the values that they are pointing to.  You can use a temporary variable if you wish but try to do it without using any temporary variables.

Function Signature:

void swap_pointers(int* ptr1, int* ptr2);
Input:

ptr1: A pointer to an integer.

ptr2: A pointer to an integer.

Output:

The function should modify the values stored at the memory locations pointed by ptr1 and ptr2, effectively swapping their values.

Example:

int a {5};
int b {10};
 
int* ptrA = &a;
int* ptrB = &b;
 
swap_pointers(ptrA, ptrB);

// After the function call, the values should be swapped.
// a == 10, b == 
*/



#include<iostream>
#include<vector>
#include<stdint.h>
#include<string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;


void swapPointers(int* ptr1, int* ptr2) 
{
cout<<*ptr1<< "   "<<*ptr2<<"\n" ;


// Method 1 Of Swapping Values through a temp pointer.
int *temp{nullptr};
temp = ptr1;
ptr1 = ptr2;
ptr2 = temp;


cout<<*ptr1<< "   "<<*ptr2 ;
/*Method 2 Using Pointer Arithmetic 

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
*/



}



int main()
{

int a {10};
int b {5};

swapPointers(&a,&b);


return 0;
}