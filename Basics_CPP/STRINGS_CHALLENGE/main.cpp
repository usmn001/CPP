/*
Write a C++ program that displays a Letter Pyramid from a user-provided std::string.
Prompt the user to enter a std::string and then from that string display a Letter Pyramid as follows:
It's much easier to understand the Letter Pyramid given examples.
If the user enters the string "ABC", then your program should display:

  A                                                                                                                    
 ABA                                                                                                                   
ABCBA 

If the user enters the string, "12345", then your program should display:
    1                                                                                                                  
   121                                                                                                                 
  12321                                                                                                                
 1234321                                                                                                               
123454321
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

int main()
{

string input{};
cout<<" Enter A String : ";
getline(cin,input);



for(int index = 1;index<=input.length();index++) // For printing the number of rows of entire pattern
{

for(int ts=input.length()-index;ts>=0;ts--)      // For displaying spaces
{
cout<<" ";    
}

cout<<input.substr(0,index);                     // For displaying substring starting from 0 position to position index.

for(int j=index-2;j>=0;j--)                      // For printing string characters backwards
{
char c = input.at(j);
cout<<c;
}


cout<<"\n";


}


return 0;    
}