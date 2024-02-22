#include "EvCar.h"
std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << static_cast<const ElectricVehicle &>(rhs)
       << " _batteryCapacity: " << rhs._batteryCapacity
       << " _chargingType: " <<static_cast<int> (rhs._chargingType);
    return os;
}

EvCar::EvCar(int id, VehicleType type, float price, int count, int power, float capacity, ChargingType ctype)
:ElectricVehicle(id,type,price,count,power),_batteryCapacity(capacity),_chargingType(ctype)
{
}

float EvCar::CalculateGst()
{
    return vehiclePrice()*0.5;
}

float EvCar::CalculateExchangeAmount()
{
    if(vehicleType()==VehicleType::REGULAR)
    {
        return vehiclePrice()*0.60;
    }
    else if(vehicleType()==VehicleType::TRANSPORT && (chargingType()==ChargingType::AC || chargingType()==ChargingType::DC_FAST_CHARGE))
    {
        return vehiclePrice()*0.75;
    }
    else
    {
        return vehiclePrice()*0.75;
    }
}
