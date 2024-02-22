#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<array>
#include<memory>
#include<algorithm>
#include<numeric>
#include"Automobile.h"
#include"EmptyContainerException.h"


using AutomobilePointer=std::shared_ptr<Automobile>;
using Container=std::array<AutomobilePointer,3>;

void CreateObjects(Container& data);
void FindGreenPassCostById(Container& data,std::string id);
float FindAveragePriceOfAllInstances(Container& data);
void DispalyPrivilegeType(Container& data);

#endif // FUNCTIONALITIES_H
