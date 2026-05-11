#include <vector>
#include <iostream>
#include <algorithm>
#include <stdint.h>
#include <string>

using namespace std;
using std::vector;
using std::find;

int main()
{
    vector<int> vec_it{ 5, 7, 1, 2, 8, 4, 2 };
    string result;
    for(auto it = vec_it.begin(); it != vec_it.end(); ++it) 
    {
        if(*it%2 == 0)
        {
            result = ""; // to reset the result string for every new number
            result += to_string(*it) + "A";    
            cout << result << "\n";
        }
        else if(*it%3 == 0)
        {        
            result = ""; // to reset the result string for every new number
            result += to_string(*it) + "B";    
            cout << result << "\n";
        }
         else if(*it%2 != 0 && *it%3 != 0 )
        {        
            result = ""; // to reset the result string for every new number
            cout << *it << " is not divisible by 2 and 3\n";
        }
    }
    return 0;
}