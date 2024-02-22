#include "Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<Employee>(219308,"Murali",EmployeeType::FULL_TIME,"21",10000,20));
    data.emplace_back(std::make_shared<Employee>(219312,"Vijay",EmployeeType::FULL_TIME,"22",15000,22));
    data.emplace_back(std::make_shared<Employee>(219323,"Chandra",EmployeeType::PERMIT_HOLDER,"23",7000,15));
    data.emplace_back(std::make_shared<BusinessOwner>(3081,"Uday",BusinessOwnerType::INTERNATIONAL,"22",100000,30));
    data.emplace_back(std::make_shared<BusinessOwner>(3091,"Varma",BusinessOwnerType::MULTISTATE,"24",200000,35));   
}

std::optional<int> CountOfBusinessOwnerInstancesByAge(Container &data, std::string age)
{
   if(data.empty())
   {
        throw EmptyContainerException("Conatiner is empty!!!!!");
   }

   int count=std::count_if(data.begin(),data.end(),[&](std::variant<EmployeePointer,BusinessOwnerPointer>& ptr){
        if(std::holds_alternative<BusinessOwnerPointer>(ptr))
        {
            auto p=std::get<BusinessOwnerPointer>(ptr);
            return p->businessOwnerAge()>age;
        }
        return false;
   });

    if(count==0)
    {
        return std::nullopt;
    }
    return count;
}

bool CheckAllEmployeeInstancesTaxAmountAbovePassingValue(Container &data, int amount)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!!!");
    }

    bool flag=std::all_of(data.begin(),data.end(),[&](std::variant<EmployeePointer,BusinessOwnerPointer>& ptr){
        if(std::holds_alternative<EmployeePointer>(ptr))
        {
            auto p=std::get<EmployeePointer>(ptr);
            return p->employeeTaxableAmount()>amount;
        }
        return false;
    });

    return flag;
}

std::optional<Container> ReturnAllInstancesBelowTaxPercent(Container &data, std::future<int> &ft)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!!!");
    }
    
    Container result(data.size());
    int taxpercent=ft.get();

    auto itr=std::copy_if(data.begin(),data.end(),result.begin(),[&](std::variant<EmployeePointer,BusinessOwnerPointer>& ptr){
        if(std::holds_alternative<EmployeePointer>(ptr))
        {
            auto p=std::get<EmployeePointer>(ptr);
            return p->employeeTaxPercent()<taxpercent;
        }
        else
        {
            auto p=std::get<BusinessOwnerPointer>(ptr);
            return p->businessOwnerTaxPercent() <taxpercent;
        }
    });

    int size=std::distance(result.begin(),itr);
    result.resize(size);

    if(result.empty())
    {
        return std::nullopt;
    }
    return result;

}
