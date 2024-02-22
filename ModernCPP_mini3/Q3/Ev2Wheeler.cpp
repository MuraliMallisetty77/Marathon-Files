#include "Ev2Wheeler.h"
std::ostream &operator<<(std::ostream &os, const Ev2Wheeler &rhs) {
    os << static_cast<const ElectricVehicle &>(rhs)
       << " _batteryCapacity: " << rhs._batteryCapacity
       << " _connectionTYpe: " <<static_cast<int>(rhs._connectionTYpe);
    return os;
}

Ev2Wheeler::Ev2Wheeler(int id, VehicleType type, float price, int count, int power, float capacity, ConnectedTechType ctype)
:ElectricVehicle(id,type,price,count,power),_batteryCapacity(capacity),_connectionTYpe(ctype)
{
}

float Ev2Wheeler::CalculateGst()
{
    return vehiclePrice()*0.10;
}

float Ev2Wheeler::CalculateExchangeAmount()
{
    return vehiclePrice()*0.32;
}
