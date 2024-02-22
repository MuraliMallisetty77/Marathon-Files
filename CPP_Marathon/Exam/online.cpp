#include<iostream>
#include"online.h"

Online::Online()
{
    Exam_platform=MEET;
}

Online::Online(EXAM_CATEGORY ec, std::string e, int t, PLATFORM p):Exam(ec,e,t)
{
    Exam_platform=p;
}

Online::~Online()
{
}

Online::Online(Online &o)
{
    setExamType(o.getExamType());
    setExamcode(o.getExamcode());
    setTimeDuration(o.getTimeDuration());
    Exam_platform=o.Exam_platform;
}

void Online::accept()
{
    Exam::accept();
    int n;
    std::cout<<"\nEnter 0-MEET,1-TEAMS,2-ZOOM:";
    std::cin>>n;
    switch(n)
    {
        case 0:
            Exam_platform=MEET;
            break;
        case 1:
            Exam_platform=TEAMS;
            break;
        case 2:
            Exam_platform=ZOOM;
            break;
        default:
            std::cout<<"\nInvalid input";
    }
}

void Online::display()
{
    switch(getExamType())
    {
        case 0:
            std::cout<<"\nExam Type:UNIT_TEST";
            break;
        case 1:
            std::cout<<"\nExam Type:MID_TERM";
            break;
        case 2:
            std::cout<<"\nExam Type:END_SEM";
            break;
    }
    std::cout<<" Exam code:"<<getExamcode()<<" Time:"<<getTimeDuration();
    switch(Exam_platform)
    {
        case 0:
            std::cout<<" Exam_platform:MEET";
            break;
        case 1:
            std::cout<<" Exam_platform:TEAMS";
            break;
        case 2:
            std::cout<<" Exam_platform:ZOOM";
            break;
    }
    
}

float Online::averageMarks(int m[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+m[i];
    }

    return sum/3.0f;
}
