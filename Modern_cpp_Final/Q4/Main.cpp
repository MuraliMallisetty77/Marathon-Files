#include"Functionalities.h"
#include<functional>
#include<thread>
#include<array>

int main()
{
    Container data;

    std::thread t1(CreateObjects,std::ref(data));
    t1.join();

    auto partialFunction=std::bind(CountOfBusinessOwnerInstancesByAge,std::ref(data),"40");
    
   
    try
    {
        std::future<std::optional<int>> res1=std::async(std::launch::async,CountOfBusinessOwnerInstancesByAge,std::ref(data),"20");

        std::future<bool> res2=std::async(std::launch::async,CheckAllEmployeeInstancesTaxAmountAbovePassingValue,std::ref(data),10000);

        std::promise<int> pr;
        std::future<int> ft=pr.get_future();
        std::future<std::optional<Container>> res3=std::async(std::launch::async,ReturnAllInstancesBelowTaxPercent,std::ref(data),std::ref(ft));
        int val;
        std::cout<<"Enter val:";
        std::cin>>val;
        pr.set_value(val);

        std::future<std::optional<int>> res4=std::async(std::launch::async,partialFunction,std::ref(data));


        std::optional<int> count=res1.get();
        if(count.has_value())
        {
            std::cout<<"Count of Business owner instances whose age is above than given parameter:"<<count.value()<<"\n";
        }
        else
        {
            std::cout<<"No instance of Business owner  is greater than the given age \n";
        }

        std::cout<<"------------------------------------------------------------------"<<"\n";
        bool flag=res2.get();
        if(flag)
        {
            std::cout<<"All Employee instances are above given tax amount"<<"\n";
        }
        else
        {
            std::cout<<"All Employee instances are not above given tax amount"<<"\n";
        }


        std::cout<<"------------------------------------------------------------------"<<"\n";
        std::optional<Container> result=res3.get();
        if(result.has_value())
        {
            for(std::variant<EmployeePointer,BusinessOwnerPointer>& ptr:result.value())
            {
                if(std::holds_alternative<EmployeePointer>(ptr))
                {
                    auto p=std::get<EmployeePointer>(ptr);
                    std::cout<<*p<<"\n";
                }
                else
                {
                    auto p=std::get<BusinessOwnerPointer>(ptr);
                    std::cout<<*p<<"\n";
                }
            }
        }
        else
        {
            std::cout<<"No instances found whose tax percent is less than the passed parameter"<<"\n";
        }

        std::cout<<"------------------------------------------------------------------"<<"\n";
        std::optional<int> ans=res4.get();
        if(ans.has_value())
        {
            std::cout<<"Count of Business owner instances whose age is above than given parameter:"<<ans.value()<<"\n";
        }
        else
        {
            std::cout<<"No instance of Business owner  is greater than the given age \n";
        }


    }
    catch(EmptyContainerException& e)
    {
        std::cout<<e.what()<<"\n";
    }



    return 0;
}