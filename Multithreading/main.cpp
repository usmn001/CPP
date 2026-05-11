#include<iostream>
#include<stdlib.h>
#include<stdint.h>
#include<vector>
#include <string>
#include <thread>
#include <chrono>

using std::cout;
using std::cin;
using std::vector;
using std::string;
using std::thread;
using std::endl;



void f1()
{
    std::thread::id this_id = std::this_thread::get_id();  
    cout<<"Thread id is : "<<std::this_thread::get_id()<<"\n";
    cout<<"f1() called"<<std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(2));
    cout<<"f1() ended"<<std::endl;
}




int main()
{
thread t1(f1);
t1.join();


return 0;

}


