#ifndef ONLINE_H
#define ONLINE_H

#include"exam.h"
#include<string>

enum PLATFORM
{
    MEET,TEAMS,ZOOM   
};
class Online:public Exam
{
    enum PLATFORM Exam_platform;
    public:
        Online();
        Online(enum EXAM_CATEGORY,std::string,int,enum PLATFORM);
        ~Online();
        Online(Online&);
        void display();
        void accept();
        float averageMarks(int[],int);

};

#endif // ONLINE_H
