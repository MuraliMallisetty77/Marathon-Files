#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H
#include<iostream>
#include"PrivilegeCategory.h"
#include"Categoty.h"

class Automobile
{
private:
    const std::string _id;
    const std::string _brand;
    Category _category;
    float _price;
    const std::string _model;

public:
//special member functions
   Automobile()=delete;
   Automobile(const Automobile&)=delete;
   Automobile& operator=(const Automobile&)=delete;
   Automobile(Automobile&&)=delete;
   Automobile& operator=(Automobile&&)=delete;
   ~Automobile()=default;

//getters an setters
   std::string id() const { return _id; }
   std::string brand() const { return _brand; }
   Category category() const { return _category; }
   void setCategory(const Category &category) { _category = category; }
   float price() const { return _price; }
   void setPrice(float price) { _price = price; }
   std::string model() const { return _model; }

//parameterized constructor
   Automobile(std::string id,std::string brand,Category category,float price,std::string model);

//member functions
   PrivilegeCategory FindPrivilegeType();
   float GreenPassCost();
   friend std::ostream &operator<<(std::ostream &os, const Automobile &rhs);

};

#endif // AUTOMOBILE_H
