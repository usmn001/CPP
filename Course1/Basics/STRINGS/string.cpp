#include<iostream>
#include<vector>
#include<stdint.h>
#include<string>

using std::vector;
using std::cin;
using std::cout;
using std::endl;
using std::string;

int main() {


/*
// Example 1 :
string s1 = {"M USMAN"};
string s2 = {"& MEHWISH"};
cout<<s1<<"\n";

// Example 2 : Extracting a substring

cout<<s1.substr(0,1)<<"\n";
cout<<s1.substr(2,3)<<"\n";

// Example 3: Accessing a particular character of string
cout<<s1.at(0)<<"\n";


// Example 4 : Finding a substring inside a string

cout<<s1.find("USM")<<"\n";

// Example 5 : Find the length of string

cout<<"Old Length of string s1 = "<<s1.length()<<"\n";
cout<<"Length Of String s2 = "<<s2.length()<<"\n";
s1 +=s2;
cout<<"\n";
cout<<s1<< " New Length Of string s1 length becomes : "<<s1.length()<<"\n";


// Example 6 : Using Getline Method & Delimiter

string name ;
cout<<"Enter Your Name : ";

getline(cin,name);
cout<<"You Entered:"<<name<<"\n";

//Using Delimiter

getline(cin,name,'s');    // Here s delimiter here as soon as s i found the data till s will be discarded
cout<<"You Entered:"<<name<<"\n";
*/

// Exercise 1 : 
   string unformatted_full_name {"StephenHawking"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    string first_name{unformatted_full_name,0,7};
    
    string last_name = unformatted_full_name.substr(7,7);
    
    string formatted_full_name = first_name + last_name;
    
    formatted_full_name.insert(7," ");
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << formatted_full_name;

// Exercise 2 : Using Swap Method Of String
 string journal_entry_1 {"Isaac Newton"};
    string journal_entry_2 {"Leibniz"};
    
    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    journal_entry_1.erase(0,6);
    if(journal_entry_2< journal_entry_1){
        journal_entry_2.swap(journal_entry_1);
    }
    
    
    
    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----
    
    cout << journal_entry_1 << "\n" << journal_entry_2;



return 0;    
}