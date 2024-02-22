#include "Functionalities.h"

void CrateObjects(MapContainer &data)
{
    data.emplace(std::make_pair<int,AccountPointer>(5655,std::make_shared<Account>(
        5655,
        std::vector<Unit> { Unit("u101","Murali",UnitType::PREMIUM,10000), Unit("u102","Uday",UnitType::PRIME,15000)})));

    data.emplace(std::make_pair<int,AccountPointer>(5775,std::make_shared<Account>(
        5775,
        std::vector<Unit> { Unit("u5775","Varma",UnitType::MINI,70000), Unit("u5776","Vijay",UnitType::PRIME,20000)})));

    data.emplace(std::make_pair<int,AccountPointer>(5466,std::make_shared<Account>(
        5466,
        std::vector<Unit> { Unit("u5466","Purvika",UnitType::PREMIUM,11000), Unit("u5499","Prashanth",UnitType::MINI,9000)})));

    data.emplace(std::make_pair<int,AccountPointer>(6988,std::make_shared<Account>(
        6988,
        std::vector<Unit> { Unit("u6998","Chandra",UnitType::PREMIUM,15000), Unit("u6999","Ravi",UnitType::PREMIUM,17000)})));

    data.emplace(std::make_pair<int,AccountPointer>(6543,std::make_shared<Account>(
        6543,
        std::vector<Unit> { Unit("u6543","Rakesh",UnitType::PRIME,10000), Unit("u6544","Rahul",UnitType::PRIME,15000)})));
}

bool AddFareAMount(int accNo, std::string unitNo, int amount, MapContainer &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Container is empty!!!");
    }

    auto itr=std::find_if(data.begin(),data.end(),[&](const std::pair<int,AccountPointer>& ptr){
        return ptr.second->getAccountNumber()==accNo;
    });

    if(itr==data.end())
    {
        return false;
    }
    else
    {
        bool flag=false;
        for(Unit& unit:(*itr).second->getAccountUnits())
        {
            if(unit.getUnitRegNumber()==unitNo)
            {
                flag=true;
                unit.setUnitMonthlyRevenue(amount);
            }
        }
        return flag;
    }

    // bool flag=false;
    // auto itr=std::find_if(data.begin(),data.end(),[&](const std::pair<int,AccountPointer>& ptr){
    //         if(ptr.second->getAccountNumber()==accNo)
    //         {
    //             for(Unit& unit:ptr.second->getAccountUnits())
    //             {
    //                 if(unit.getUnitRegNumber()==unitNo)
    //                 {
    //                     flag=true;
    //                     unit.setUnitMonthlyRevenue(amount);
    //                 }
    //             }
    //         }
    //         return flag;
    // });

    // if(itr==data.end())
    // {
    //     return false;
    // }
    // return true;


    // bool flag=false;
    // for(const std::pair<int,AccountPointer>& ptr:data)
    // {
    //     if(ptr.second->getAccountNumber()==accNo)
    //     {
    //         for(Unit& unit:ptr.second->getAccountUnits())
    //         {
    //             if(unit.getUnitRegNumber()==unitNo)
    //             {
    //                 flag=true;
    //                 unit.setUnitMonthlyRevenue(amount);
    //             }
    //         }
    //     }
    // }

    // return flag;
}

std::optional<int> TotalRevenueForAccount(int accNo, MapContainer &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Container is empty!!!");
    }

    int ans=std::accumulate(data.begin(),data.end(),0,[&](int total,const std::pair<int,AccountPointer>& ptr){
         if(ptr.second->getAccountNumber()==accNo)
        {
            for(Unit& unit:ptr.second->getAccountUnits())
            {
                total+=unit.getUnitMonthlyRevenue();
            }
        }
        return total;

    });
    
    if(ans==0)
    {
        return std::nullopt;
    }
    return ans;


    // int total=0;
    // for(const std::pair<int,AccountPointer>& ptr:data)
    // {
    //     if(ptr.second->getAccountNumber()==accNo)
    //     {
    //         for(Unit& unit:ptr.second->getAccountUnits())
    //         {
    //             total+=unit.getUnitMonthlyRevenue();
    //         }
    //     }
    // }

    // if(total==0)
    // {
    //     return std::nullopt;
    // }
    // return total;
}

int BonusAmountForAccount(int accNo, MapContainer &data)
{

    if(data.empty())
    {
        throw EmptyContainerException("Container is empty!!!");
    }

    int bonus=0;
    int total=0;
   for(const std::pair<int,AccountPointer>& ptr:data)
    {
        if(ptr.second->getAccountNumber()==accNo)
        {
            for(Unit& unit:ptr.second->getAccountUnits())
            {
                 total+=unit.getUnitMonthlyRevenue();
            }
            if(total<=50000)
            {
                bonus=total+1000;
            }
            else
            {
                bonus=total+2000;
            }
        }
    }
    if(bonus==0)
    {
        return -1;
    }
    return bonus;
}
