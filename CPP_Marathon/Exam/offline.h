#ifndef OFFLINE_H
#define OFFLINE_H

#include"exam.h"
#include<string>
enum TOPIC
{
    CPP,DS,JAVA   
};
class Offline:public Exam
{
    enum TOPIC ExamTopic;
    std::string examLocation;
    public:
        Offline();
        Offline(enum EXAM_CATEGORY,std::string,int,enum TOPIC,std::string);
        ~Offline();
        void display();
        void accept();
        void changelocation(std::string);
};

#endif // OFFLINE_H
