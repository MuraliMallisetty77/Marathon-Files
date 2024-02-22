#ifndef BUSINESSOWNER_H
#define BUSINESSOWNER_H

#include<iostream>
#include"BusinessOwnerType.h"

class BusinessOwner
{
private:
    const unsigned int _businessOwner_reg_id;
    std::string _businessOwnerName;
    BusinessOwnerType _businessOwnerType;
    std::string _businessOwnerAge;
    int _businessOwner_taxableAmount;
    int _businessOwner_taxPercent;
public:
//special member functions
    BusinessOwner()=delete;
    BusinessOwner(const BusinessOwner&)=delete;
    BusinessOwner& operator=(const BusinessOwner&)=delete;
    BusinessOwner(BusinessOwner&&)=delete;
    BusinessOwner& operator=(BusinessOwner&&)=delete;
    ~BusinessOwner()=default;

//getters and setters
    unsigned int businessOwnerRegId() const { return _businessOwner_reg_id; }
    std::string businessOwnerName() const { return _businessOwnerName; }
    void setBusinessOwnerName(const std::string &businessOwnerName) { _businessOwnerName = businessOwnerName; }
    BusinessOwnerType businessOwnerType() const { return _businessOwnerType; }
    void setBusinessOwnerType(const BusinessOwnerType &businessOwnerType) { _businessOwnerType = businessOwnerType; }
    std::string businessOwnerAge() const { return _businessOwnerAge; }
    void setBusinessOwnerAge(const std::string &businessOwnerAge) { _businessOwnerAge = businessOwnerAge; }
    int businessOwnerTaxableAmount() const { return _businessOwner_taxableAmount; }
    void setBusinessOwnerTaxableAmount(int businessOwner_taxableAmount) { _businessOwner_taxableAmount = businessOwner_taxableAmount; }
    int businessOwnerTaxPercent() const { return _businessOwner_taxPercent; }
    void setBusinessOwnerTaxPercent(int businessOwner_taxPercent) { _businessOwner_taxPercent = businessOwner_taxPercent; }

//Parameterized constructor
    BusinessOwner(unsigned int id,std::string name,BusinessOwnerType type,std::string age,int taxAmount,int taxPercent);
    
//Member function
    friend std::ostream &operator<<(std::ostream &os, const BusinessOwner &rhs);
    

};

#endif // BUSINESSOWNER_H
