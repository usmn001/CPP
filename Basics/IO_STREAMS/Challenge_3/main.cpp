// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>

using std::fstream;
using std::string;
using std::cout;
using std::cin;
using std::size_t;


int main() {
    string word_to_find{};
    string word_read{};    
    int match_cnt{0};
    int read_word{0};


    cout<<"Enter String To Search For : ";cin>>word_to_find;
    fstream fobj {"romeoandjuliet.txt"};    // Creating a fstream object fobj for reading file 

    if(fobj.is_open())  
    {
     

   while(!fobj.eof())
     {
     
     fobj>>word_read;
     read_word+=1; 
     
     if(word_read.find(word_to_find)!=-1)
     {
     match_cnt+=1; 
     cout<<word_read<<"  ";
     }    
     
     
     }
   
   
     fobj.close();
      
    }

  cout<<"Searched Words : "<<read_word<<"\n";
  cout<<"Substring "<<word_to_find<<" was found "<<match_cnt<<" Times"<<"\n";
return 0;
}











