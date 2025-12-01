// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include<algorithm>
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <iterator>
using std::deque;
using std::cout;
using std::copy;
using std::copy_if;
using std::rend;
using std::rbegin;
using std::begin;
using std::end;
using std::string;
using std::back_inserter;
using std::front_inserter;
using std::equal;
using std::transform;

 

bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a deque to solve the problem.
deque<char> d1 ;
d1.clear();
copy_if(s.rbegin(),s.rend(),back_inserter(d1),[](char x) { return std::isalpha(x);});
transform(d1.begin(),d1.end(),d1.begin(),[](char x) {return toupper(x); }   );  


deque<char> d2;
d2.clear();
copy_if(s.rbegin(),s.rend(),front_inserter(d2),[](char x) {return std::isalpha(x);} );
transform(d2.begin(),d2.end(),d2.begin(),[](char x) {return toupper(x); }   );  

return equal(d1.begin(),d1.end(),d2.begin(),d2.end());
    
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}