// Section 20
// Challenge 4
// Identifying palindrome strings using a stack and queue
#include <cctype>
#include <stack>
#include <queue>
#include <iostream>
#include <string>
#include <iomanip>


std::string clean_string(const std::string &s) {
    std::string result;
    for (const char &c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':' || c == '+' || c==' ' || c=='!' || c=='-'   )
            continue;
        else
            result += c;
    }
    return result;
}

typedef enum 
{
OK=1,
NOT_OK = 0
}Status_e;


bool is_palindrome(const std::string& s)
{
    // You must implement this function.
    // Since we are learning the STL - use a stack and a queue to solve the problem.
    Status_e st_enum;
    
    std::string new_string = clean_string(s);
    std::string stk_str;
    std::string que_str;
    std::stack<char,std::deque<char>> st;
    std::queue<char,std::deque<char>> qu;
    
    for(int index =0;index<new_string.length();index++)
    {
        if(std::isalpha(new_string.at(index)) )
        {
        new_string.at(index) = toupper(new_string.at(index));   // Converting the character to upper case
        st.push(new_string.at(index));
        qu.push(new_string.at(index));
        }   
    }

    while(!st.empty())
    {
        stk_str += st.top(); 
        st.pop();
        que_str += qu.front();
        qu.pop();    
    }

    if(stk_str==que_str)
    {
       st_enum = OK;
    }
    else if(stk_str!=que_str)
    {
        st_enum = NOT_OK;
    }
   
    return st_enum;
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