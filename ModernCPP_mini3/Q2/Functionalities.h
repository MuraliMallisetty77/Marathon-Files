#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<vector>
#include<memory>
#include<variant>
#include<optional>
#include<algorithm>
#include"Developer.h"
#include"CodeTester.h"
#include"EmptyContainerException.h"

using DeveloperPointer=std::shared_ptr<Developer>;
using CodeTesterPointer=std::shared_ptr<CodeTester>;
using Container=std::vector<std::variant<DeveloperPointer,CodeTesterPointer>>;

void CreateObjects(Container& data);
std::optional<Container> FindInstancesByExperience(Container& data);
float CalculateAverageOfCodeTester(Container& data);
std::optional<std::vector<SkillSet>> FindSkillsOfEmployeeById(Container& data,std::string id);
bool AnyEmployeeSalaryAbove60000(Container& data);
std::optional<float> CalculateBonusById(Container& data,std::string id);


#endif // FUNCTIONALITIES_H
