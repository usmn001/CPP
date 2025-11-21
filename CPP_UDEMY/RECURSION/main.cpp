
#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
using std::cout;
using std::endl;


int main()
{
int sum = {0};
int rem = {0};



int n = 123;

while(n!=0)
{
rem = n%10 ;
printf("Remainder = %d\n",rem);
sum += rem;
n = n/10;
printf("Number = %d\n",n);
}
printf("%d\n",sum);



return 0;
}
