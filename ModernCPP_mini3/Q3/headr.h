#ifndef HEADR_H
#define HEADR_H
#include<memory>
#include"ElectricVehicle.h"

using ElectricVehiclePointer=std::shared_ptr<ElectricVehicle>;

struct comp
{
    bool operator()(const ElectricVehiclePointer& e1,const ElectricVehiclePointer& e2) const 
    {
        return e1->vehicleId()<e2->vehicleId();
    }
};

#endif // HEADR_H
