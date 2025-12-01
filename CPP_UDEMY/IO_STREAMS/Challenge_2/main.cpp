// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using std::vector;
using namespace std;
using std::fstream;
using std::cout;
using std::setw;
using std::setfill;
using std::setprecision;
using std::fixed;


int main() {
    
    const int st_width{20};
    const int sc_width{7};
    string max_grade;
    string name;
    string grade;
    fstream fobj {"responses.txt"};
    int grade_cnt{};
    vector<int> student_grades;
    double average{};
    int sum{};
    int st_num{};


cout<<setw(st_width)<<left<<"Student"
    <<setw(st_width)<<right<<"Score"<<"\n";

cout<<setw(40)<<setfill('-')<<"\n";    
cout<<setfill(' ')<<"\n";


    if(fobj.is_open())  
    {
      fobj>>max_grade;  
      while(!fobj.eof())  
      {
        st_num+=1;
        fobj>>name;
        fobj>>grade;
        grade_cnt = 0;
        for(int i=0;i<grade.length();i++)
        {
            if( grade.at(i) == max_grade.at(i))
             {
              grade_cnt+=1;    
             }

        }
       cout<<setw(7)<<left<<name
           <<setw(30)<<right<<grade_cnt<<"\n";  
       sum+=grade_cnt;    
        student_grades.push_back(grade_cnt); 
      }
      
    }

fobj.close();

average = static_cast<double>(sum)/st_num;
cout<<setw(40)<<setfill('-')<<"\n"; 
cout<<setfill(' ');
cout<<setw(st_width)<<left<<"Average Score"
    <<setw(st_width-1)<<right<<setprecision(3)<<fixed<<average<<"\n";

    
    
    
    return 0;
}

