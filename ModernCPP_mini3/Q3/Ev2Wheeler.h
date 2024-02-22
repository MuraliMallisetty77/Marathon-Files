#ifndef EV2WHEELER_H
#define EV2WHEELER_H

#include<iostream>
#include"ElectricVehicle.h"
#include"ConnectedTechType.h"

class Ev2Wheeler:public ElectricVehicle
{
private:
    float _batteryCapacity;
    ConnectedTechType _connectionTYpe;
public:
    Ev2Wheeler()=delete;
    Ev2Wheeler(const Ev2Wheeler&)=default;
    Ev2Wheeler& operator=(const Ev2Wheeler&)=delete;
    Ev2Wheeler(Ev2Wheeler&&)=default;
    Ev2Wheeler& operator=(Ev2Wheeler&&)=delete;
    ~Ev2Wheeler()=default;

    float batteryCapacity() const { return _batteryCapacity; }
    void setBatteryCapacity(float batteryCapacity) { _batteryCapacity = batteryCapacity; }
    ConnectedTechType connectionTYpe() const { return _connectionTYpe; }
    void setConnectionTYpe(const ConnectedTechType &connectionTYpe) { _connectionTYpe = connectionTYpe; }


    Ev2Wheeler(int id,VehicleType type,float price,int count,int power,float capacity,ConnectedTechType ctype);

    friend std::ostream &operator<<(std::ostream &os, const Ev2Wheeler &rhs);
    float CalculateGst() override;
    float CalculateExchangeAmount() override;

    friend bool operator<(const Ev2Wheeler& e1,const Ev2Wheeler& e2)
    {
        return e1.vehicleId()<e2.vehicleId();
    }

    

    
};

#endif // EV2WHEELER_H
