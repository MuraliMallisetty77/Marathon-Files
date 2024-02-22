#include"ThreadHandler.h"
#include<thread>

int main()
{
    ThreadHandler obj1(5);
    std::thread t1(&ThreadHandler::Operation,&obj1);
    std::thread t2(&ThreadHandler::InputCapture,&obj1);
    t1.join();
    t2.join();

}