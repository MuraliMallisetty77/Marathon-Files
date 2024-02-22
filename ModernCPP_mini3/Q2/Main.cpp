#include"Functionalities.h"
#include<thread>
#include<future>

int main()
{
    Container data;
    //CreateObjects(data);
    std::thread t1(CreateObjects,std::ref(data));
    t1.join();
    try
    {
        std::future<std::optional<Container>> res1=std::async(std::launch::async,FindInstancesByExperience,std::ref(data));
        std::future<float> res2=std::async(std::launch::async,CalculateAverageOfCodeTester,std::ref(data));
        std::future<std::optional<std::vector<SkillSet>>> res3=std::async(std::launch::async,FindSkillsOfEmployeeById,std::ref(data),"C101");
        std::future<bool> res4=std::async(std::launch::async,AnyEmployeeSalaryAbove60000,std::ref(data));
        std::future<std::optional<float>> res5=std::async(std::launch::async,CalculateBonusById,std::ref(data),"D101");

        std::optional<Container> result=res1.get();
        if(result.has_value())
        {
            for(std::variant<DeveloperPointer,CodeTesterPointer>& ptr:result.value())
            {
                if(std::holds_alternative<DeveloperPointer>(ptr))
                {
                    auto developer=std::get<DeveloperPointer>(ptr);
                    std::cout<<*developer;
                }
                else
                {
                    auto tester=std::get<CodeTesterPointer>(ptr);
                    std::cout<<*tester;
                }
            }
        }
        else
        {
            std::cout<<"No instance found with experinece above 6 years"<<"\n";
        }
        std::cout<<"----------------------------"<<"\n";

        float ans=res2.get();
        std::cout<<"Average salary of all code tester instances:"<<ans<<"\n";
        std::cout<<"----------------------------"<<"\n";

        std::optional<std::vector<SkillSet>> skillResult=res3.get();
        if(skillResult.has_value())
        {
            for(SkillSet& skill:skillResult.value())
            {
                switch(skill)
                {
                    case SkillSet::CODE_REVIEW:std::cout<<"CODE_REVIEW\n";
                    break;
                    case SkillSet::CODING:std::cout<<"CODING\n";
                    break;
                    case SkillSet::INTEGRATION_TESTING:std::cout<<"INTEGRATION_TESTING\n";
                    break;
                    case SkillSet::UNIT_TESTING:std::cout<<"UNIT_TESTING\n";
                    break;
                }
            }
        }
        else
        {
            std::cout<<"Id not found"<<"\n";
        }
        std::cout<<"----------------------------"<<"\n";


        bool flag=res4.get();
        if(flag)
        {
            std::cout<<"Employee exists with salary above 60000"<<"\n";
        }
        else
        {
            std::cout<<"No Employee exists with salary above 60000"<<"\n";
        }
        std::cout<<"----------------------------"<<"\n";

        std::optional<float> bonus=res5.get();
        if(bonus.has_value())
        {
            std::cout<<"Bonus of Employee:"<<bonus.value();
        }
        else
        {
            std::cout<<"No employee found with given id!!";
        }
    }

    catch(EmptyContainerException& e)
    {
        std::cout<<e.what()<<"\n";
    }

   
  

}