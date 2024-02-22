#ifndef VEHICLE_H
#define VEHICLE_H

#include<cstring>
class Vehicle
{
    int chassisNumber;
    char brand[100];
    double ex_showroomprice;
    int tax;
    double insurance_amount;
    public:
        Vehicle();
        Vehicle(int,const char*,double,int,double);
        virtual ~Vehicle();
        virtual void  accept();
        virtual void display();

        int getChassisNumber() const { return chassisNumber; }
        void setChassisNumber(int chassisNumber_) { chassisNumber = chassisNumber_; }
        void setBrand(const char *b)
        {
            strcpy(brand,b);
        }
        char* getBrand()
        {
            return brand;
        }
        double getexShowroomprice() const { return ex_showroomprice; }
        void setExShowroomprice(double exShowroomprice) { ex_showroomprice = exShowroomprice; }

        double insuranceAmount() const { return insurance_amount; }
        void setInsuranceAmount(double insuranceAmount) { insurance_amount = insuranceAmount; }

};

#endif // VEHICLE_H
