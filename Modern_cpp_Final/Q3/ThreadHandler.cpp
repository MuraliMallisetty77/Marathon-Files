#include "ThreadHandler.h"

ThreadHandler::ThreadHandler(int val)
:value(val)
{
}

void ThreadHandler::Operation()
{
   std::unique_lock<std::mutex> ul(mt);
   cv.wait(ul,[&](){return values_available; }) ;
   for(int& val:vect)
   {
        val=val*val;
        std::cout<<val<<" ";
   }
   
}

void ThreadHandler::InputCapture()
{
    int val;
    std::cout<<"Enter "<<value<<" values:";
    for(int i=0;i<value;i++)
    {
        std::cin>>val;
        vect.emplace_back(val); 
    }
    values_available=true;
    cv.notify_one();
}
