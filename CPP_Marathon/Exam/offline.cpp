#include<iostream>
#include"offline.h"

Offline::Offline()
{
    ExamTopic=CPP;
}

Offline::Offline(EXAM_CATEGORY ec, std::string e, int t, TOPIC p,std::string l):Exam(ec,e,t),examLocation(l)
{
    ExamTopic=p;
}

Offline::~Offline()
{
}

void Offline::accept()
{
    Exam::accept();
    int n;
    std::cout<<"\nEnter 0-C++,1-DS,2-JAVA:";
    std::cin>>n;
    switch(n)
    {
        case 0:
            ExamTopic=CPP;
            break;
        case 1:
            ExamTopic=DS;
            break;
        case 2:
            ExamTopic=JAVA;
            break;
        default:
            std::cout<<"\nInvalid input";
    }
    std::cout<<"\nEnter location:";
    std::cin>>examLocation;
}
void Offline::display()
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
    switch(ExamTopic)
    {
        case 0:
            std::cout<<" Exam Topic:C++";
            break;
        case 1:
            std::cout<<" Exam Topic:DS";
            break;
        case 2:
            std::cout<<" Exam Topic:JAVA";
            break;
    }
    std::cout<<" Location:"<<examLocation<<std::endl;
}

void Offline::changelocation(std::string newlocation)
{
    examLocation=newlocation;
}
