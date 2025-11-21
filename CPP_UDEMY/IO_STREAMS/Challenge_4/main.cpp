// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>
#include <iomanip>

using std::fstream;
using std::ofstream;
using std::ifstream;
using std::string;
using std::cout;
using std::cin;
using std::size_t;
using std::getline;
using std::endl;
using std::setw;
using std::left;

int main() {
    
    string word_read{};
    int line_num{0};

    ifstream fobj {"romeoandjuliet"};    // Creating a fstream object fobj for reading file 
    ofstream out_file {"romeoandjuliet2.txt"};   // Creating a fstream object fobj for writing file 


    if( (fobj.is_open()) && (out_file.is_open()) )  
    {
     

   while(!fobj.eof())
     {

     if(getline(fobj,word_read))
     {       
          
          if(word_read == "       ")
          {
                out_file<<endl;
          }

        else
          {
            line_num+=1;
            out_file<<setw(7)<<left<<line_num
                    <<word_read<<endl; 
          }        
            
     } 
     
     
     
     
     }
   
   
     fobj.close();
     out_file.close(); 
    }
cout<<"Lines Written : "<<line_num;
 
return 0;
}


