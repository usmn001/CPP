/*Exercise: Reverse a std::string using Pointers

Specification:

Write a C++ function reverse_string that takes a std::string as input and returns a new std::string with the characters in reverse order. The function should use pointers to perform the reversal.

Function Signature:

std::string reverse_string(const std::string& str);
Input:

str: The input string.

Output:

The function should return a new string with the characters of str reversed.

Example:

std::string input = "Hello, World!";
std::string reversed = reverse_string(input);
 
// reversed should be "!dlroW ,olleH" */

#include<iostream>
#include<vector>
#include<stdint.h>
#include<string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main(){

string str = "Hello,World!";
string new_str {};

size_t str_len = str.size();

const char *start = str.c_str();
const char *end =start+str_len-1;

while(end>=start)
{
new_str.push_back(*end);
end--;
}



cout<<new_str<<"\n";

return 0;

}





