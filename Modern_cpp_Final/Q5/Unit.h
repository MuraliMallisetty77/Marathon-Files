#ifndef UNIT_H
#define UNIT_H

#include<iostream>
#include"UnitType.h"

class Unit
{
private:
    const std::string unitRegNumber;
    std::string unitDriverName;
    UnitType unitType;
    int unitMonthlyRevenue;
public:
//special Member functions
    Unit()=delete;
    Unit(const Unit&)=default;
    Unit& operator=(const Unit&)=delete;
    Unit(Unit&&)=delete;
    Unit& operator=(Unit&&)=delete;
    ~Unit()=default;

//Parameterizrd constructor
    Unit(std::string regNum,std::string name,UnitType type,int revenue);


//Setters and Getters
    std::string getUnitRegNumber() const { return unitRegNumber; }
    std::string getUnitDriverName() const { return unitDriverName; }
    UnitType getUnitType() const { return unitType; }
    int getUnitMonthlyRevenue() const { return unitMonthlyRevenue; }
    void setUnitMonthlyRevenue(int unitMonthlyRevenue_) { unitMonthlyRevenue = unitMonthlyRevenue_; }

//Member functions
    friend std::ostream &operator<<(std::ostream &os, const Unit &rhs);
   
};

#endif // UNIT_H
