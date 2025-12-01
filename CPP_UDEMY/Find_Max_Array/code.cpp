/*
Write a C++ function find_max_element that takes an integer array and its size as input and returns the maximum element in the array using pointers.

Function Signature:

int findMaxElement(int* arr, int size);
Input:

arr: A pointer to the first element of the integer array.

size: The size of the array.

Output:

The function should return the maximum element in the array.

Example:

int arr[] = {12, 45, 67, 23, 9};
int size = sizeof(arr) / sizeof(arr[0]);
 
int maxElement = findMaxElement(arr, size);
 
// maxElement should be 67
Constraints:

The array will always have at least one element.

The elements in the array are unique.

*/




// You do NOT have to write a main() function. The main() function is written by me
// behind the scenes to call your function and test your code.
#include<iostream>
#include<stdlib.h>



int find_max_element(int* arr, int size) 
{
    //-- Write your code below this line 
int max_element = *arr;

for(int index = 1; index<size;index++)
{
    if( *(arr+index)>max_element ) {
        max_element=*(arr+index);
    }
}


return max_element; 

    //-- Write your code below this line 
}