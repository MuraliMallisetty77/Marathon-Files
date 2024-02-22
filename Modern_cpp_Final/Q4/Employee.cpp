#include "Employee.h"
std::ostream &operator<<(std::ostream &os, const Employee &rhs) {
    os << "_employee_reg_id: " << rhs._employee_reg_id
       << " _employeeName: " << rhs._employeeName
       << " _employeeType: " <<static_cast<int>(rhs._employeeType)
       << " _employeeAge: " << rhs._employeeAge
       << " _Employee_taxableAmount: " << rhs._employee_taxableAmount
       << " _employee_taxPercent: " << rhs._employee_taxPercent;
    return os;
}

Employee::Employee(unsigned int id, std::string name, EmployeeType type, std::string age, int taxAmount, int taxPercent)
:_employee_reg_id(id),_employeeName(name),_employeeType(type),_employeeAge(age),_employee_taxableAmount(taxAmount),_employee_taxPercent(taxPercent)
{
}