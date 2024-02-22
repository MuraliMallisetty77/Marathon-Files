#ifndef BIKE_H
#define BIKE_H

#include"vehicle.h"
enum BIKE_CATEGORY
{
    Commute,Sports,Offroader
};

class Bike:public Vehicle
{
    enum BIKE_CATEGORY category;
    public:
        Bike();
        Bike(int,const char *,double,int,double,enum BIKE_CATEGORY);
        ~Bike();
        void accept();
        void display();

        enum BIKE_CATEGORY getCategory() const { return category; }
        void setCategory(const enum BIKE_CATEGORY &category_) { category = category_; }
};

#endif // BIKE_H
