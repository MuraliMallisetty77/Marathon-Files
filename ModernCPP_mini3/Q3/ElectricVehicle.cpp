#include "ElectricVehicle.h"
std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs) {
    os << "_vehicleId: " << rhs._vehicleId
       << " _vehicleType: " <<static_cast<int>(rhs._vehicleType)
       << " _vehiclePrice: " << rhs._vehiclePrice
       << " _seat_count: " << rhs._seat_count
       << " _engine_horsePower: " << rhs._engine_horsePower;
    return os;
}

ElectricVehicle::ElectricVehicle(int id, VehicleType type, float price, int count, int power)
:_vehicleId(id),_vehicleType(type),_vehiclePrice(price),_seat_count(count),_engine_horsePower(power)
{
}