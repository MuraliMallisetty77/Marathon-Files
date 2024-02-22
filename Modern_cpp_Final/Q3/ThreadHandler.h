#ifndef THREADHANDLER_H
#define THREADHANDLER_H
#include<iostream>
#include<mutex>
#include<vector>
#include<condition_variable>


class ThreadHandler
{
private:
    std::mutex mt;
    std::condition_variable cv;
    bool values_available{false};
    int value;
    std::vector<int> vect;
public:
//special member function
    ThreadHandler()=delete;
    ThreadHandler(const ThreadHandler&)=delete;
    ThreadHandler& operator=(const ThreadHandler&)=delete;
    ThreadHandler(ThreadHandler&&)=delete;
    ThreadHandler& operator=(ThreadHandler&&)=delete;
    ~ThreadHandler()=default;

//Parameterized constructor
    ThreadHandler(int val);

//Member functions
    void Operation();
    void InputCapture();

};

#endif // THREADHANDLER_H
