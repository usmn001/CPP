#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include <string>
#include <vector>
#include "Movies.h"

using std::string;
using std::vector;
using std::cout;



void Movies::Add(string name,string rating,int count)
{
  
Movie m(name,rating,count);    
int flag = 0;
for(auto n : m_collection)
{

if(n.name==name)
{
cout<<"Error This Movie already exists in the collection \n";    
flag = 1;
}


}

if(flag!=1)
{
m_collection.push_back(m);
}

}

void Movies::Inc_Count(string name,int wcnt)
{

int flag{0};
for(auto &n : m_collection)
{

if(n.name==name)
{
n.cnt+=wcnt;
flag =1;
}

}

if(flag!=1)
{
cout<<"Error : Movie Not Found In Collection \n ";
}

}

void Movies::Display()
{
if(m_collection.size()!=0)

{
for(auto &n : m_collection)
{
cout<<"Movie Name = "<<n.name<<"\n";
cout<<"Rating = "<<n.rating<<"\n";
cout<<"Watched Count = "<<n.cnt<<"\n";
}

}
else 
cout<<"Error No Movies Exists \n";

}


Movies::Movies()
{


}