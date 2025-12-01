// Section 20
// Challenge 3  
// Maps and Sets

#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>

// Used for Part1
// Display the word and count from the 
// std::map<std::string, int>

void display_words(const std::map<std::string, int> &words) {
    std::cout << std::setw(12) << std::left << "\nWord"
                << std::setw(7) << std::right << "Count"<< std::endl;
    std::cout << "===================" << std::endl;
    for (auto pair: words)
        std::cout << std::setw(12) << std::left << pair.first   /* Printing the map key */
                       << std::setw(7) << std::right << pair.second << std::endl; /* Printing the associated key value */
}

// Used for Part2
// Display the word and occurences from the 
// std::map<std::string, std::set<int>>

void display_words(const std::map<std::string, std::set<int>> &words)
{
     std::cout << std::setw(12) << std::left << "\nWord"
                << "Occurrences"<< std::endl;
    std::cout << "=====================================================================" << std::endl;
    for (auto pair: words) {
        std::cout << std::setw(12) << std::left << pair.first /* Printing the map key */
                       << std::left << "[ ";
        for (auto i: pair.second) 
            std::cout << i << " ";       /* Printing the associated key value */
        std::cout << "]" << std::endl;
    }
}

// This function removes periods, commas, semicolons and colon in 
// a string and returns the clean version
std::string clean_string(const std::string &s) {
    std::string result;
    for (const char &c: s) {
        if (c == '.' || c == ',' || c == ';' || c == ':')
            continue;
        else
            result += c;
    }
    return result;
}

// Part1 process the file and builds a map of words and the 
// number of times they occur in the file

void part1() {
    std::map<std::string, int> words;
    std::string line;       
    std::string word;   
    std::ifstream in_file {"/home/musman/Desktop/CPP/CPP_UDEMY/STL/MAP_Challenge/words.txt"};
    
    if (in_file.is_open()) {
        
        // You implement this code
        std::cout<<"File opened Successfully";
   
      while(std::getline(in_file,line))
      {
        std::istringstream ss{line};
        while(ss >> word)
        {
        word=clean_string(word);
        words[word]++;
        }         
      } 
       
        in_file.close();
        display_words(words);
        std::cout<<"\n";
    } 
    else if (in_file.is_open()==false){
        std::cerr << "Error opening input file" << std::endl;
    }
}
    
// Part2 process the file and builds a map of words and a 
// set of line numbers in which the word appears
void part2() {
    std::map<std::string, std::set<int>> words; /*Here we are creating associative container map named words containing string type key and associated values present in set container*/
    std::string line;
    std::string word;
    std::ifstream in_file {"/home/musman/Desktop/CPP/CPP_UDEMY/STL/MAP_Challenge/words.txt"}; /*Here we are associating a file stream with a file*/
     std::istringstream ss{line};
     int cnt{};
    if (in_file.is_open()) 
    {
         std::cout<<"File opened Successfully";
        // You implement this code
       while(getline(in_file,line)) /* Reading a line till end of it from file descriptor in_file and putting it in string type line*/
      {
        std::istringstream ss{line};
        cnt+=1;     

       if(ss >> word) /*  Read from string stream ss and output it in string type word*/
        {
        word=clean_string(word);   /*Cleaning the word from all dots and commas if present*/
        cnt+=1;                    /*incrementing the word count */ 
        words[word].insert(cnt);   /* Adding the read word and count value in map using set method insert */
        }         


      }
        in_file.close();
        display_words(words);
    } 
    else if (in_file.is_open()==false)
    {
        std::cerr << "Error opening input file" << std::endl;
    }
}

int main() {
    part1();
    part2();
    return 0;
}

