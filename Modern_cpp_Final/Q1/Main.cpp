#include"Functionalities.h"

int main()
{
    Container data;
    CreateObjects(data);

    try
    {
        FindGreenPassCostById(data,"A101");
    }
    catch(EmptyContainerException& e)
    {
        std::cout<<e.what()<<"\n";
    }
    std::cout<<"\n------------------------------------------------------\n";
    try
    {
        std::cout<<"Average price of all instances:"<<FindAveragePriceOfAllInstances(data);
    }
    catch(EmptyContainerException& e)
    {
        std::cout<<e.what()<<"\n";
    }
    std::cout<<"\n------------------------------------------------------\n";
    try
    {
        DispalyPrivilegeType(data);
    }
    catch(EmptyContainerException& e)
    {
        std::cout<<e.what()<<"\n";
    }

    return 0;
}