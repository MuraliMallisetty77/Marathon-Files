#include"Functionalities.h"

int main()
{
    MapContainer data;
    CrateObjects(data);

    try
    {
        if(AddFareAMount(5655,"u101",10000,data))
        {
            std::cout<<"Account found with given parameters and value updated in monthly revenue"<<"\n";
        }
        else
        {
            std::cout<<"No Account found with given parameters or invalid account number or invalid unit number"<<"\n";
        }
    }
    catch(EmptyContainerException& e)
    {
        std::cout<<e.what()<<"\n";
    }
    std::cout<<"-------------------------------------------------------------------"<<"\n";

    try
    {
        std::optional<int> totalRevenue=TotalRevenueForAccount(5655,data);
        if(totalRevenue.has_value())
        {
            std::cout<<"Total revenue of account:"<<totalRevenue.value()<<"\n";
        }
        else
        {
            std::cout<<"No account found with given account number"<<"\n";
        }
        
    }
    catch(EmptyContainerException& e)
    {
        std::cout<<e.what()<<"\n";
    }
    std::cout<<"-------------------------------------------------------------------"<<"\n";

    try
    {
        int bonus=BonusAmountForAccount(5655,data);
        if(bonus==-1)
        {
            std::cout<<"No account found with given account number"<<"\n";
        }
        else
        {
            std::cout<<"Total revenue of account after adding bonus:"<<bonus<<"\n";
        }
        
    }
    catch(EmptyContainerException& e)
    {
        std::cout<<e.what()<<"\n";
    }
    














    return 0;
}