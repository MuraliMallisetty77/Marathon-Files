#ifndef EXAM_H
#define EXAM_H

#include<string>
enum EXAM_CATEGORY
{
    UNIT_TEST,MID_TERM,END_SEM
};
class Exam
{
    enum EXAM_CATEGORY Exam_type;
    std::string examcode;
    int timeDuration;
    public:
        Exam();
        Exam(enum EXAM_CATEGORY,std::string,int);
        virtual ~Exam();
        virtual void accept();
        virtual void display()=0;//pure virtual function
        enum EXAM_CATEGORY getExamType() const { return Exam_type; }
        void setExamType(const enum EXAM_CATEGORY &examType) { Exam_type = examType; }

        std::string getExamcode() const { return examcode; }
        void setExamcode(const std::string &examcode_) { examcode = examcode_; }

        int getTimeDuration() const { return timeDuration; }
        void setTimeDuration(int timeDuration_) { timeDuration = timeDuration_; }
        



};

#endif // EXAM_H
