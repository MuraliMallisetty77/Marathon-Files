#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include<iostream>
#include"EmployeeType.h"

class Employee
{
private:
    const unsigned int _employee_reg_id;
    std::string _employeeName;
    EmployeeType _employeeType;
    std::string _employeeAge;
    int _employee_taxableAmount;
    int _employee_taxPercent;
public:
//special member functions
    Employee()=delete;
    Employee(const Employee&)=delete;
    Employee& operator=(const Employee&)=delete;
    Employee(Employee&&)=delete;
    Employee& operator=(Employee&&)=delete;
    ~Employee()=default;

//getters and setters
    unsigned int employeeRegId() const { return _employee_reg_id; }
    std::string employeeName() const { return _employeeName; }
    void setEmployeeName(const std::string &employeeName) { _employeeName = employeeName; }
    EmployeeType employeeType() const { return _employeeType; }
    void setEmployeeType(const EmployeeType &employeeType) { _employeeType = employeeType; }
    std::string employeeAge() const { return _employeeAge; }
    void setEmployeeAge(const std::string &employeeAge) { _employeeAge = employeeAge; }
    int employeeTaxableAmount() const { return _employee_taxableAmount; }
    void setEmployeeTaxableAmount(int Employee_taxableAmount) { _employee_taxableAmount = Employee_taxableAmount; }
    int employeeTaxPercent() const { return _employee_taxPercent; }
    void setEmployeeTaxPercent(int employee_taxPercent) { _employee_taxPercent = employee_taxPercent; }

//Parameterized constructor
    Employee(unsigned int id,std::string name,EmployeeType type,std::string age,int taxAmount,int taxPercent);

//Member function
    friend std::ostream &operator<<(std::ostream &os, const Employee &rhs);
};

#endif // EMPLOYEE_H
