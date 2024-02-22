#include "BusinessOwner.h"
std::ostream &operator<<(std::ostream &os, const BusinessOwner &rhs) {
    os << "_businessOwner_reg_id: " << rhs._businessOwner_reg_id
       << " _businessOwnerName: " << rhs._businessOwnerName
       << " _businessOwnerType: " <<static_cast<int>( rhs._businessOwnerType)
       << " _businessOwnerAge: " << rhs._businessOwnerAge
       << " _businessOwner_taxableAmount: " << rhs._businessOwner_taxableAmount
       << " _businessOwner_taxPercent: " << rhs._businessOwner_taxPercent;
    return os;
}

BusinessOwner::BusinessOwner(unsigned int id, std::string name, BusinessOwnerType type, std::string age, int taxAmount, int taxPercent)
:_businessOwner_reg_id(id),_businessOwnerName(name),_businessOwnerType(type),_businessOwnerAge(age),_businessOwner_taxableAmount(taxAmount),_businessOwner_taxPercent(taxPercent)
{
}