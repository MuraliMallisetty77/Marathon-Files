#include "Functionalities.h"
#include<numeric>

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<Developer>("D101","Murali",1000000.0f,9,std::vector<SkillSet>{SkillSet::CODING,SkillSet::CODE_REVIEW}));
    data.emplace_back(std::make_shared<Developer>("D102","Varsha",800000.0f,3,std::vector<SkillSet>{SkillSet::CODING,SkillSet::CODE_REVIEW}));
    data.emplace_back(std::make_shared<CodeTester>("C101","Vijay",6000000.0f,7,std::vector<SkillSet>{SkillSet::UNIT_TESTING,SkillSet::INTEGRATION_TESTING}));
    data.emplace_back(std::make_shared<CodeTester>("C102","Varma",5000000.0f,3,std::vector<SkillSet>{SkillSet::UNIT_TESTING,SkillSet::INTEGRATION_TESTING}));

}

std::optional<Container> FindInstancesByExperience(Container &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!");
    }

    Container result(data.size());
    bool flag=false;
    auto itr=std::copy_if(data.begin(),data.end(),result.begin(),[&](std::variant<DeveloperPointer,CodeTesterPointer>& ptr){
       
        if(std::holds_alternative<DeveloperPointer>(ptr))
        {

            auto p=std::get<DeveloperPointer>(ptr);
            // if(p->developerExperinece()>6)
            // {
            //     return true;
            // }
            return p->developerExperinece()>6;
        }
        else
        {
            auto p=std::get<CodeTesterPointer>(ptr);
            // if(p->codeTesterExperinece()>6)
            // {
            //     return true;
            // }
            return p->codeTesterExperinece()>6;

        } 
        //return false;    
    });

    int size=std::distance(result.begin(),itr);
    result.resize(size);


    // Container result;
    //     for(std::variant<DeveloperPointer,CodeTesterPointer>& ptr:data)
    //     {
    //         if(std::holds_alternative<DeveloperPointer>(ptr))
    //         {
    //             auto p=std::get<DeveloperPointer>(ptr);
    //             if(p->developerExperinece()>6)
    //             {
    //                 result.emplace_back(p);
    //             }
    //         }
    //         else
    //         {
    //             auto p=std::get<CodeTesterPointer>(ptr);
    //             if(p->codeTesterExperinece()>6)
    //             {
    //                 result.emplace_back(p);
    //             }
    //         }   
    //     }
        if(result.empty())
        {
            return std::nullopt;
        }

        return result;
}

float CalculateAverageOfCodeTester(Container &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!");
    }

    int count=0;
    float ans=std::accumulate(data.begin(),data.end(),0.0f,[&](float total,std::variant<DeveloperPointer,CodeTesterPointer>& ptr){
        if(std::holds_alternative<CodeTesterPointer>(ptr))
        {
            auto p=std::get<CodeTesterPointer>(ptr);
            count++;
            total+=p->codeTesterSalary();
        }
        return total;
    });
    // float sum{0.0f};
    // int count=0;
    // for(std::variant<DeveloperPointer,CodeTesterPointer>& ptr:data)
    // {
    //     if(std::holds_alternative<CodeTesterPointer>(ptr))
    //     {
    //         auto p=std::get<CodeTesterPointer>(ptr);
    //         sum+=p->codeTesterSalary();  
    //         count++;
    //     }
    // }
    return ans/count;
}

std::optional<std::vector<SkillSet>> FindSkillsOfEmployeeById(Container &data, std::string id)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!");
    }

    auto itr=std::find_if(data.begin(),data.end(),[&](std::variant<DeveloperPointer,CodeTesterPointer>& ptr){
         if(std::holds_alternative<DeveloperPointer>(ptr))
        {
            auto p=std::get<DeveloperPointer>(ptr);
            if(p->developerId()==id)
            {
                return true;
            }   
        }
        else
        {
            auto p=std::get<CodeTesterPointer>(ptr);
            if(p->codeTesterId()==id)
            {
                return true;
            }   
        }
        return false;
    });

    if(itr==data.end())
    {
        return std::nullopt;
    }

    else if(std::holds_alternative<DeveloperPointer>(*itr))
    {
         auto p=std::get<DeveloperPointer>(*itr);
         return p->developerSkill();
    }
    else{
         auto p=std::get<CodeTesterPointer>(*itr);\
         return p->codeTesterSkill();
    }




    // std::vector<SkillSet> result;
    // int flag=0;
    // for(std::variant<DeveloperPointer,CodeTestd::distance(result)sterPointer>& ptr:data)
    // {
    //     if(std::holds_alternative<DeveloperPointer>(ptr))
    //     {
    //         auto p=std::get<DeveloperPointer>(ptr);
    //         if(p->developerId()==id)
    //         {
    //             flag=1;
    //             result.assign(p->developerSkill().begin(),p->developerSkill().end());
    //         }   
    //     }
    //     else
    //     {
    //         auto p=std::get<CodeTesterPointer>(ptr);
    //         if(p->codeTesterId()==id)
    //         {
    //             flag=1;
    //             return p->codeTesterSkill(); 
    //         }   
    //     }
    // }

    // if(result.empty())
    // {
    //     return std::nullopt;
    // }

    //return result;
}

bool AnyEmployeeSalaryAbove60000(Container &data)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!");
    }

    bool ans=std::any_of(data.begin(),data.end(),[](std::variant<DeveloperPointer,CodeTesterPointer>& ptr){
         if(std::holds_alternative<DeveloperPointer>(ptr))
        {
            auto p=std::get<DeveloperPointer>(ptr);
            return p->developerSalary()>60000; 
        }
        else
        {
            auto p=std::get<CodeTesterPointer>(ptr);
            return p->codeTesterSalary()>60000; 
        }
    });
    return ans;
    // bool flag=false;
    // for(std::variant<DeveloperPointer,CodeTesterPointer>& ptr:data)
    // {
    //     if(std::holds_alternative<DeveloperPointer>(ptr))
    //     {
    //         auto p=std::get<DeveloperPointer>(ptr);
    //         if(p->developerSalary()>60000)
    //         {
    //             flag=true;
    //         }   
    //     }
    //     else
    //     {
    //         auto p=std::get<CodeTesterPointer>(ptr);
    //         if(p->codeTesterSalary()>60000)
    //         {
    //             flag=true;
    //         }   
    //     }
    // }

    // return flag;
}

std::optional<float> CalculateBonusById(Container &data, std::string id)
{
    if(data.empty())
    {
        throw EmptyContainerException("Conatiner is empty!!!");
    }
    
    float ans=std::accumulate(data.begin(),data.end(),0.0f,[&](float total,std::variant<DeveloperPointer,CodeTesterPointer>& ptr){
            if(std::holds_alternative<DeveloperPointer>(ptr))
            {
                auto p=std::get<DeveloperPointer>(ptr);
                if(p->developerId()==id)
                total+=p->CalculateBonus();
                return total;
            }
            else
            {
                auto p=std::get<CodeTesterPointer>(ptr);
                if(p->codeTesterId()==id)
                total+=p->CalculateBonus();
                return total;
            }
    });

    if(ans==0)
    {
        std::nullopt;
    }
    return ans;

    // float bonus{0.0f};
    // for(std::variant<DeveloperPointer,CodeTesterPointer>& ptr:data)
    // {
    //     if(std::holds_alternative<DeveloperPointer>(ptr))
    //     {
    //         auto p=std::get<DeveloperPointer>(ptr);
    //         if(p->developerId()==id)
    //         {
    //             bonus=p->CalculateBonus();
    //         }   
    //     }
    //     else
    //     {
    //         auto p=std::get<CodeTesterPointer>(ptr);
    //         if(p->codeTesterId()==id)
    //         {
    //             bonus=p->CalculateBonus();
    //         }   
    //     }
    // }

    // if(bonus==0)
    // {
    //     return std::nullopt;
    // }
    // return bonus;
}
