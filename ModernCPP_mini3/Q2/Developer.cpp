#include"Developer.h"

std::ostream &operator<<(std::ostream &os, const Developer &rhs) {
    os << "_developerId: " << rhs._developerId
       << " _developerName: " << rhs._developerName
       << " _DeveloperSalary: " << rhs._developerSalary
       <<"_DeveloperExperience:"<<rhs._developerExperinece
       << " _developerSkill: " ;
       for(SkillSet s:rhs._developerSkill)
       {
            switch(s)
            {
                case SkillSet::CODING:os<<"CODING\n";
                break;
                case SkillSet::CODE_REVIEW:os<<"CODE_REVIEW\n";
                break;
            }
       }
    return os;
}

Developer::Developer(std::string id, std::string name, float salary,int experience, std::vector<SkillSet> skill)
:_developerId(id),_developerName(name),_developerSalary(salary),_developerExperinece(experience),_developerSkill(skill)
{
}

float Developer::CalculateBonus()
{
    if(_developerExperinece<=5)
    {
        return _developerSalary*0.10;
    }
    return _developerSalary*0.20;
}
