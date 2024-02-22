#ifndef DEVELOPER_H
#define DEVELOPER_H

#include<iostream>
#include<vector>
#include"SkillSet.h"


class Developer
{
private:
    const std::string _developerId;
    std::string _developerName;
    float _developerSalary;
    int _developerExperinece;
    std::vector<SkillSet>  _developerSkill;
public:
//special member functions
    Developer()=delete;
    Developer(const Developer&)=delete;
    Developer& operator=(const Developer&)=delete;
    Developer(Developer&&)=delete;
    Developer& operator=(Developer&&)=delete;
    ~Developer()=default;

//parameterized constructor
    Developer(std::string id,std::string name,float salary,int experience,std::vector<SkillSet> skill);

//getters and setters
    std::string developerId() const { return _developerId; }
    std::string developerName() const { return _developerName; }
    void setDeveloperName(const std::string &developerName) { _developerName = developerName; }
    float developerSalary() const { return _developerSalary; }
    int developerExperinece() const { return _developerExperinece; }
    void setDeveloperExperinece(int developerExperinece) { _developerExperinece = developerExperinece; }
    void setDeveloperSalary(float DeveloperSalary) { _developerSalary = DeveloperSalary; }
    std::vector<SkillSet> developerSkill() const { return _developerSkill; }

//member functions
float CalculateBonus();
friend std::ostream &operator<<(std::ostream &os, const Developer &rhs);


};

#endif // DEVELOPER_H
