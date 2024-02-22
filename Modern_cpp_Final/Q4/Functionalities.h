#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<vector>
#include<memory>
#include<variant>
#include<future>
#include<optional>
#include<algorithm>
#include"Employee.h"
#include"BusinessOwner.h"
#include"EmptyConatinerException.h"

using EmployeePointer=std::shared_ptr<Employee>;
using BusinessOwnerPointer=std::shared_ptr<BusinessOwner>;
using Container=std::vector<std::variant<EmployeePointer,BusinessOwnerPointer>>;

void CreateObjects(Container& data);
std::optional<int> CountOfBusinessOwnerInstancesByAge(Container& data,std::string age);
bool CheckAllEmployeeInstancesTaxAmountAbovePassingValue(Container& data,int amount);
std::optional<Container> ReturnAllInstancesBelowTaxPercent(Container& data,std::future<int>& ft);


#endif // FUNCTIONALITIES_H
