#ifndef ELECTRICVEHICLE_H
#define ELECTRICVEHICLE_H

#include<iostream>
#include"VehicleType.h"

class ElectricVehicle
{
private:
    int _vehicleId;
    VehicleType _vehicleType;
    float _vehiclePrice;
    int _seat_count;
    int _engine_horsePower;
public:
   ElectricVehicle()=delete;
   ElectricVehicle(const ElectricVehicle&)=default;
   ElectricVehicle& operator=(const ElectricVehicle&)=delete;
   ElectricVehicle(ElectricVehicle&&)=default;
   ElectricVehicle& operator=(ElectricVehicle&&)=delete;
   ~ElectricVehicle()=default;

   int vehicleId() const { return _vehicleId; }
   VehicleType vehicleType() const { return _vehicleType; }
   float vehiclePrice() const { return _vehiclePrice; }
   int seatCount() const { return _seat_count; }
   int engineHorsePower() const { return _engine_horsePower; }

   ElectricVehicle(int id,VehicleType type,float price,int count,int power);

   friend std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs);
    virtual float CalculateGst()=0;
    virtual float CalculateExchangeAmount()=0;

    friend bool operator<(const ElectricVehicle& e1,const ElectricVehicle& e2)
    {
        return e1._vehicleId<e2._vehicleId;
    }
   


   
};

#endif // ELECTRICVEHICLE_H
