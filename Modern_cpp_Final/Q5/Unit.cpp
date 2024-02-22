#include"Unit.h"

std::ostream &operator<<(std::ostream &os, const Unit &rhs) {
    os << "unitRegNumber: " << rhs.unitRegNumber
       << " unitDriverName: " << rhs.unitDriverName
       << " unitType: " <<static_cast<int>( rhs.unitType)
       << " unitMonthlyRevenue: " << rhs.unitMonthlyRevenue;
    return os;
}

Unit::Unit(std::string regNum, std::string name, UnitType type, int revenue)
:unitRegNumber(regNum),unitDriverName(name),unitType(type),unitMonthlyRevenue(revenue)
{
}
