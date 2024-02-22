#include<iostream>
#include"exam.h"

Exam::Exam()
{
    Exam_type=UNIT_TEST;
    examcode="12frf";
    timeDuration=1;
}

Exam::Exam(EXAM_CATEGORY ec, std::string e, int t):examcode(e),timeDuration(t)
{
    Exam_type=ec;
}

Exam::~Exam()
{
}

void Exam::accept()
{
    int n;
    std::cout<<"\nEnter 0-UNIT_TEST,1-MID_TERM,2-END_SEM:";
    std::cin>>n;
    switch(n)
    {
        case 0:
            Exam_type=UNIT_TEST;
            break;
        case 1:
            Exam_type=MID_TERM;
            break;
        case 2:
            Exam_type=END_SEM;
            break;
        default:
            std::cout<<"\nInvalid input";
    }
    std::cout<<"\nEnter Examcode:";
    std::cin>>examcode;
    std::cout<<"\nEnter time:";
    std::cin>>timeDuration;
}

