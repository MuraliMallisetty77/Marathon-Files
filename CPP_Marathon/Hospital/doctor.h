#ifndef DOCTOR_H
#define DOCTOR_H

#include<iostream>
#include<string>
#include"hospital.h"
class Doctor:public Hospital
{
    std::string doctor_id;
    std::string doctor_name;
    std::string doctor_specality;
    std::string registered_hospital_name;
    float doctor_fees;
    public:
        Doctor();
        Doctor(std::string,std::string,enum Rating,std::string,std::string,std::string,std::string,float);
        virtual ~Doctor();
        void accept();
        void calculateTax(Doctor[],int);
        friend std::ostream& operator<<(std::ostream &,Doctor&);

        std::string doctorId() const { return doctor_id; }
        void setDoctorId(const std::string &doctorId) { doctor_id = doctorId; }

        std::string getDoctorName() const { return doctor_name; }
        void setDoctorName(const std::string &doctorName) { doctor_name = doctorName; }

        std::string doctorSpecality() const { return doctor_specality; }
        void setDoctorSpecality(const std::string &doctorSpecality) { doctor_specality = doctorSpecality; }

        std::string getregisteredHospitalName() const { return registered_hospital_name; }
        void setRegisteredHospitalName(const std::string &registeredHospitalName) { registered_hospital_name = registeredHospitalName; }

        float getDoctorFees() const { return doctor_fees; }
        void setDoctorFees(float doctorFees) { doctor_fees = doctorFees; }
        
};

#endif // DOCTOR_H
