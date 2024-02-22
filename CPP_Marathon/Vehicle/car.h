#ifndef CAR_H
#define CAR_H

#include"vehicle.h"

enum CAR_CATEGORY
{
    SUV,HatchBack,Sedan
};

class Car:public Vehicle
{
    enum CAR_CATEGORY category;
    public:
        Car();
        Car(int,const char *,double,int,double,enum CAR_CATEGORY);
        ~Car();
        void accept();
        void display();

        enum CAR_CATEGORY getCategory() const { return category; }
        void setCategory(const enum CAR_CATEGORY &category_) { category = category_; }
};

#endif // CAR_H
