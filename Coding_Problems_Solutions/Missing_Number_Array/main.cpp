/*
1. Find the missing number in the array
You are given an array of positive numbers from 1 to n, such that all numbers from 1 to n are present except one number x. 
You have to find x. The input array is not sorted. Look at the below array and give it a try before checking the solution.

arr[] = 3 , 7, 1, 2, 8, 4,5
*/

#include <stdlib.h>
#include <iostream>
#include <vector>


using std::cout;
using std::vector;

int main()
{

vector<int> vec = {3,7,1,2,8,4,5,6,10,12,11}; 

int n = vec.size()+1;
int sum;
int actual_sum = (n*(n+1))/2;

for(auto &c : vec)
{
   sum +=c; 
}
cout<<(actual_sum-sum);









return 0;    
}




