#ifndef CODETESTER_H
#define CODETESTER_H

#include<iostream>
#include<vector>
#include"SkillSet.h"

class CodeTester
{
private:
   const std::string _codeTesterId;
    std::string _codeTesterName;
    float _codeTesterSalary;
    int _codeTesterExperinece;
    std::vector<SkillSet>  _codeTesterSkill;
public:
//special member functions
    CodeTester()=delete;
    CodeTester(const CodeTester&)=delete;
    CodeTester& operator=(const CodeTester&)=delete;
    CodeTester(CodeTester&&)=delete;
    CodeTester& operator=(CodeTester&&)=delete;
    ~CodeTester()=default;
//getters and setters
    std::string codeTesterId() const { return _codeTesterId; }
    std::string codeTesterName() const { return _codeTesterName; }
    void setCodeTesterName(const std::string &codeTesterName) { _codeTesterName = codeTesterName; }
    float codeTesterSalary() const { return _codeTesterSalary; }
    void setCodeTesterSalary(float codeTesterSalary) { _codeTesterSalary = codeTesterSalary; }
    int codeTesterExperinece() const { return _codeTesterExperinece; }
    void setCodeTesterExperinece(int codeTesterExperinece) { _codeTesterExperinece = codeTesterExperinece; }
    std::vector<SkillSet> codeTesterSkill() const { return _codeTesterSkill; }
    void setCodeTesterSkill(const std::vector<SkillSet> &codeTesterSkill) { _codeTesterSkill = codeTesterSkill; }
    
//parameterized constructor
    CodeTester(std::string id,std::string name,float salary,int experience,std::vector<SkillSet> skill);

//member functions
    friend std::ostream &operator<<(std::ostream &os, const CodeTester &rhs);
    float CalculateBonus();    

};

#endif // CODETESTER_H
