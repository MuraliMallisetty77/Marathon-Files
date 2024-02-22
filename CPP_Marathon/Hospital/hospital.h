#ifndef HOSPITAL_H
#define HOSPITAL_H

#include<iostream>
#include<string>
enum Rating
{
    Good,Average,Poor
};

class Hospital
{
    std::string hospital_id;
    std::string hospital_name;
    enum Rating hospital_rating;
    public:
        Hospital();
        Hospital(std::string,std::string,enum Rating);
        virtual ~Hospital();
        void accept();
        friend std::ostream& operator<<(std::ostream &,Hospital&);

        std::string gethospitalId() const { return hospital_id; }
        void setHospitalId(const std::string &hospitalId) { hospital_id = hospitalId; }

        std::string gethospitalName() const { return hospital_name; }
        void setHospitalName(const std::string &hospitalName) { hospital_name = hospitalName; }

        enum Rating gethospitalRating() const { return hospital_rating; }
        void setHospitalRating(const enum Rating &hospitalRating) { hospital_rating = hospitalRating; }
        
};

#endif // HOSPITAL_H
