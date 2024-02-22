#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<vector>
#include<functional>
#include"EmptyContainerException.h"
#include"OddNumbersNotFoundDivisibleBy3.h"
#include"EvenNumberNotFound.h"
#include"FunctionConatinerException.h"

using FnType=std::function<int(std::vector<int>)>;
using Container=std::vector<int>;
using FnContainer=std::vector<FnType>;

extern FnType f1;
extern FnType f2;
extern FnType f3;

void PerformOperation(Container& data,FnContainer& fns);


#endif // FUNCTIONALITIES_H
