#ifndef EVCAR_H
#define EVCAR_H
#include<iostream>
#include"ElectricVehicle.h"
#include"ChargingType.h"

class EvCar:public ElectricVehicle
{
private:
    float _batteryCapacity;
    ChargingType _chargingType;
public:
    EvCar()=delete;
    EvCar(const EvCar&)=default;
    EvCar& operator=(const EvCar&)=delete;
    EvCar(EvCar&&)=default;
    EvCar& operator=(EvCar&&)=delete;
    ~EvCar()=default;

    float batteryCapacity() const { return _batteryCapacity; }
    void setBatteryCapacity(float batteryCapacity) { _batteryCapacity = batteryCapacity; }
    ChargingType chargingType() const { return _chargingType; }
    void setChargingType(const ChargingType &chargingType) { _chargingType = chargingType; }

    EvCar(int id,VehicleType type,float price,int count,int power,float capacity,ChargingType ctype);

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);
    float CalculateGst() override;
    float CalculateExchangeAmount() override;

    friend bool operator<(const EvCar& e1,const EvCar& e2)
    {
        return e1.vehicleId()<e2.vehicleId();
    }
    

    
};

#endif // EVCAR_H


