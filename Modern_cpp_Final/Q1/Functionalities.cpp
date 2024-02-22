#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data[0]=std::make_shared<Automobile>("A101","BMW",Category::PRIVATE,300000,"X6");
    data[1]=std::make_shared<Automobile>("A102","Suzuki",Category::TRANSPORT,200000,"Baleno");
    data[2]=std::make_shared<Automobile>("A101","Thar",Category::DEFENSE,2700000,"X4");
}

void FindGreenPassCostById(Container &data, std::string id)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!");
    }

    auto itr=std::find_if(data.begin(),data.end(),[&](AutomobilePointer& ptr){
        return ptr->id()==id;
    });

    if(itr==data.end())
    {
        std::cout<<"No instance found with given id"<<"\n";
    }
    else
    {
        std::cout<<"Green Pass cost of the instance matches with given id:"<<(*itr)->GreenPassCost();
    }
}

float FindAveragePriceOfAllInstances(Container &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!");
    }

    float ans=std::accumulate(data.begin(),data.end(),0.0f,[](float total,AutomobilePointer& ptr){
        return total+ptr->price();
    });

    return ans/data.size();
}

void DispalyPrivilegeType(Container &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!");
    }

    for(AutomobilePointer& ptr:data)
    {
        switch(ptr->FindPrivilegeType())
        {
            case PrivilegeCategory::GOVT:std::cout<<"GOVT\n";
            break;
            case PrivilegeCategory::VIP:std::cout<<"VIP\n";
            break;
            case PrivilegeCategory::PERSONAL:std::cout<<"PERSONAL\n";
            break;
        }
    }
}
