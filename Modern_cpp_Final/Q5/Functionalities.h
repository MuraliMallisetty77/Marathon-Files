#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<memory>
#include<unordered_map>
#include<optional>
#include<algorithm>
#include<numeric>
#include"Account.h"
#include"Unit.h"
#include"EmptyConatinerException.h"

using AccountPointer=std::shared_ptr<Account>;
using MapContainer=std::unordered_map<int,AccountPointer>;

void CrateObjects(MapContainer& data);
bool AddFareAMount(int accNo,std::string unitNo,int amount,MapContainer& data);
std::optional<int> TotalRevenueForAccount(int accNo,MapContainer& data);
int BonusAmountForAccount(int accNo,MapContainer& data);




#endif // FUNCTIONALITIES_H
