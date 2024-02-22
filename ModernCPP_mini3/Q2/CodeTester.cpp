#include"CodeTester.h"
std::ostream &operator<<(std::ostream &os, const CodeTester &rhs) {
    os << "_codeTesterId: " << rhs._codeTesterId
       << " _codeTesterName: " << rhs._codeTesterName
       << " _codeTesterSalary: " << rhs._codeTesterSalary
       << " _codeTesterExperinece: " << rhs._codeTesterExperinece
       << " _codeTesterSkill: " ;
       for(SkillSet s:rhs._codeTesterSkill)
       {
            switch(s)
            {
                case SkillSet::UNIT_TESTING:os<<"UNIT_TESTING\n";
                break;
                case SkillSet::INTEGRATION_TESTING:os<<"INTEGRATION_TESTING\n";
                break;
            }
       }
    return os;
}

CodeTester::CodeTester(std::string id, std::string name, float salary, int experience, std::vector<SkillSet> skill)
:_codeTesterId(id),_codeTesterName(name),_codeTesterSalary(salary),_codeTesterExperinece(experience),_codeTesterSkill(skill)
{
}

float CodeTester::CalculateBonus()
{
    if(_codeTesterExperinece<=5)
    {
        return _codeTesterSalary*0.10;
    }
    return _codeTesterSalary*0.20;
}
