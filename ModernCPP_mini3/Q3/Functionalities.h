#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include<vector>
#include<memory>
#include<future>
#include<optional>
#include<algorithm>
#include"ElectricVehicle.h"
#include"EvCar.h"
#include"Ev2Wheeler.h"
#include"EmptyContainerException.h"
#include<unordered_map>
#include<map>
#include<mutex>
#include<queue>
#include"headr.h"
#include<set>
//extern std::mutex mt;


//using ElectricVehiclePointer=std::shared_ptr<ElectricVehicle>;
//using Container=std::vector<ElectricVehiclePointer>;
//using MapContainer=std::unordered_map<int,ElectricVehiclePointer>;
//using MapContainer=std::map<int,ElectricVehiclePointer>;
// struct comp
// {
//     bool operator()(const ElectricVehiclePointer& e1,const ElectricVehiclePointer& e2)
//     {
//         return e1->vehicleId()<e2->vehicleId();
//     }
// };

// using Pcontainer=std::priority_queue<ElectricVehiclePointer,std::vector<ElectricVehiclePointer>,comp>;
// void CreateObjects(Pcontainer& data);
// void display(Pcontainer data);


// void CreateObjects(MapContainer& data);
// std::optional<MapContainer> ReturnInstancesByPrice(MapContainer& data,float threshold);
// bool find(MapContainer& data);


// void CreateObjects(Container& data);
// void DisplayAllInstancesById(Container& data,std::future<int>& ft);
// void DisplayAveragePriceOfEvCarByEngineHorsePower(Container& data);
// std::optional<Container> ReturnInstancesByPrice(Container& data,float threshold);
// void display();


// using SetContainer=std::set<ElectricVehiclePointer,comp>;

// void CreateObjects(SetContainer& data);
// void Display(SetContainer& data);


using MContainer=std::map<std::string,ElectricVehiclePointer>;

void CreateObjects(MContainer& data);
void Display(MContainer& data);


#endif // FUNCTIONALITIES_H
