/* Determine if the sum of two integers is equal to the given value
   So we are following this approach as we know sum = a+b so to find b we do 
   b = sum - a and we are finding b value for in the entire vector to check whether it exists or not 
   for every check i.e. in following case 10-5 = 5 is present in the vector so we count 1 and 10-7 =3 .
   3 is not present in the vector so we still count 1 . We are using iterators. 

   https://www.educative.io/blog/crack-amazon-coding-interview-questions

*/

#include <vector>
#include <iostream>
#include <algorithm>
#include <stdint.h>

using namespace std;
using std::vector;
using std::find;

int main()
{
    vector<int> vec_it{ 5, 7, 1, 2, 8, 4, 2 };

    int target_sum = 10;
    int num = std::count_if(vec_it.begin(), vec_it.end(), [target_sum, &vec_it](int x) {
        return std::find(vec_it.begin(), vec_it.end(), target_sum - x) != vec_it.end();
    });
    
    cout << "Count of elements where (target_sum - element) is valid: " << num <<"\n\n" ;




    return 0;
}