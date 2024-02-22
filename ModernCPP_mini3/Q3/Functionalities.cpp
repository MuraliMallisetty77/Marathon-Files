#include "Functionalities.h"

// std::mutex mt;

// void CreateObjects(Container &data)
// {
//     data.emplace_back(std::make_shared<EvCar>(120,VehicleType::REGULAR,8700000,5,600,100,ChargingType::AC));
//     data.emplace_back(std::make_shared<EvCar>(122,VehicleType::TRANSPORT,600000,7,400,80,ChargingType::DC_FAST_CHARGE));
//     data.emplace_back(std::make_shared<Ev2Wheeler>(111,VehicleType::REGULAR,100000,2,300,90,ConnectedTechType::DIGITAL));
// }

// void DisplayAllInstancesById(Container &data, std::future<int> &ft)
// {
//     if(data.empty())
//     {
//         throw EmptyContainerException("Conatiner is empty!!!");
//     }
//     int id=ft.get();
//     bool flag=false;
//     for(ElectricVehiclePointer& ptr:data)
//     {
//         std::shared_ptr<EvCar> car=std::dynamic_pointer_cast<EvCar>(ptr);
//         if(car!=nullptr)
//         {
//             if(car->vehicleId()==id)
//             {
//                 flag=true;
//                 std::cout<<*car<<"\n";
//                 break;
//             }
                
//         }
//         else
//         {
//             std::shared_ptr<Ev2Wheeler> bike=std::dynamic_pointer_cast<Ev2Wheeler>(ptr);
//             if(bike->vehicleId()==id)
//             {
//                 flag=true;
//                 std::cout<<*bike<<"\n";
//                 break;
//             }
//         }
        
//     }
//     if(!flag)
//     {
//         std::cout<<"No instances found with given id"<<"\n";
//     }
// }

// void DisplayAveragePriceOfEvCarByEngineHorsePower(Container &data)
// {
//      if(data.empty())
//     {
//         throw EmptyContainerException("Conatiner is empty!!!");
//         //throw std::runtime_error("empty!!!");
//     }
//     float sum{0.0f};
//     int count=0;
//     for(ElectricVehiclePointer& ptr:data)
//     {
//         std::shared_ptr<EvCar> car=std::dynamic_pointer_cast<EvCar>(ptr);
        
//         if(car!=nullptr)
//         {
//             if(car->engineHorsePower()<600)
//             {
//                 sum+=car->vehiclePrice();
//                 count++;
//             }
//         }
//     }
//     //std::lock_guard<std::mutex> lk(mt);
//     std::cout<<"Average price by engine horse power:"<<(sum/count)<<"\n";
// }

// std::optional<Container> ReturnInstancesByPrice(Container &data, float threshold)
// {
//     if(data.empty())
//     {
//         throw EmptyContainerException("Conatiner is empty!!!");
//     }

    
//     Container result{data.size()};
//     auto itr=std::copy_if(data.begin(),data.end(),result.begin(),[&](ElectricVehiclePointer& ptr){
//         return ptr->vehiclePrice()>threshold;
//         // std::shared_ptr<EvCar> ev=std::dynamic_pointer_cast<EvCar>(ptr);
//         // if(ev!=nullptr)
//         // {
//         //     return ev->vehiclePrice()>threshold;
//         // }
//         // else
//         // {
//         //     std::shared_ptr<Ev2Wheeler> e=std::dynamic_pointer_cast<Ev2Wheeler>(ptr);
//         //     return e->vehiclePrice()>threshold;
//         // }
//     });
    
//     int size=std::distance(result.begin(),itr);
//     result.resize(size);
//     if(result.empty())
//     {
//         return std::nullopt;
//     }
//     return result;



//     // Container result;
//     // for(ElectricVehiclePointer& ptr:data)
//     // {
//     //     if(ptr->vehiclePrice()>threshold)
//     //     {
//     //         result.emplace_back(ptr);
//     //     }
//     // }
//     // if(result.empty())
//     // {
//     //     return std::nullopt;
//     // }
//     // return result;
// }

// void display()
// {
//    // std::lock_guard<std::mutex> lk(mt);
//     std::cout<<"get"<<"\n";
// }



//Map
// void CreateObjects(MapContainer &data)
// {
//     data.emplace(std::make_pair<int,ElectricVehiclePointer>(120,std::make_shared<EvCar>(120,VehicleType::REGULAR,10000,5,600,100,ChargingType::AC)));
//     data.emplace(std::make_pair<int,ElectricVehiclePointer>(121,std::make_shared<EvCar>(121,VehicleType::TRANSPORT,20000,6,400,90,ChargingType::DC_FAST_CHARGE)));
//     data.emplace(std::make_pair<int,ElectricVehiclePointer>(110,std::make_shared<Ev2Wheeler>(110,VehicleType::REGULAR,15000,5,600,100,ConnectedTechType::DIGITAL)));
// }

// std::optional<MapContainer> ReturnInstancesByPrice(MapContainer &data, float threshold)
// {
//     MapContainer result;
    // auto itr= std::copy_if(data.begin(),data.end(),result.begin(),[&](std::pair<int,ElectricVehiclePointer>&& ptr){
    //     return ptr.second->vehiclePrice()>threshold;
    // });

    // int size=std::distance(result.begin(),itr);
    // if(result.empty())
    // {
    //     return std::nullopt;
    // }
    // return result;
//     std::for_each(data.begin(),data.end(),[&](std::pair<int,ElectricVehiclePointer>&& ptr){
//         if(ptr.second->vehiclePrice()>threshold)
//         {
//             result.emplace(ptr);
//         }
//     });

//     if(result.empty())
//     {
//         return std::nullopt;
//     }
//     return result;


// }

// bool find(MapContainer &data)
// {
//     auto itr=std::find_if(data.begin(),data.end(),[](const std::pair<int,ElectricVehiclePointer>& ptr){
//         return ptr.second->seatCount()==5;
//     });

//     if(itr==data.end())
//     {
//         return false;
//     }
//     return true;
// }


//Priority Queue


// void CreateObjects(Pcontainer &data)
// {
//     data.push(std::make_shared<EvCar>(120,VehicleType::REGULAR,8700000,5,600,100,ChargingType::AC));
//     data.push(std::make_shared<EvCar>(122,VehicleType::TRANSPORT,600000,7,400,80,ChargingType::DC_FAST_CHARGE));
//     data.push(std::make_shared<Ev2Wheeler>(111,VehicleType::REGULAR,100000,2,300,90,ConnectedTechType::DIGITAL));
//     data.push(std::make_shared<Ev2Wheeler>(110,VehicleType::TRANSPORT,100000,2,300,90,ConnectedTechType::SMART));
//     data.push(std::make_shared<Ev2Wheeler>(131,VehicleType::REGULAR,100000,2,300,90,ConnectedTechType::DIGITAL));
//     data.push(std::make_shared<EvCar>(132,VehicleType::REGULAR,8700000,5,600,100,ChargingType::AC));
// }

// void display(Pcontainer data)
// {
//     while(!data.empty())
//     {
//         std::shared_ptr<EvCar> car=std::dynamic_pointer_cast<EvCar>(data.top());
//         if(car!=nullptr)
//         {
//             std::cout<<*car<<"\n";
//         }
//         else
//         {
//             std::shared_ptr<Ev2Wheeler> bike=std::dynamic_pointer_cast<Ev2Wheeler>(data.top());
//             std::cout<<*bike<<"\n";
//         }
//         data.pop();
//     }
// }



//Set

// void CreateObjects(SetContainer &data)
// {
//     data.emplace(std::make_shared<EvCar>(120,VehicleType::REGULAR,8700000,5,600,100,ChargingType::AC));
//     data.emplace(std::make_shared<EvCar>(122,VehicleType::TRANSPORT,600000,7,400,80,ChargingType::DC_FAST_CHARGE));
//     data.emplace(std::make_shared<Ev2Wheeler>(111,VehicleType::REGULAR,100000,2,300,90,ConnectedTechType::DIGITAL));
//     data.emplace(std::make_shared<Ev2Wheeler>(110,VehicleType::TRANSPORT,100000,2,300,90,ConnectedTechType::SMART));
//     data.emplace(std::make_shared<Ev2Wheeler>(131,VehicleType::REGULAR,100000,2,300,90,ConnectedTechType::DIGITAL));
//     data.emplace(std::make_shared<EvCar>(132,VehicleType::REGULAR,8700000,5,600,100,ChargingType::AC));
// }

// void Display(SetContainer &data)
// {
//     for(const ElectricVehiclePointer& ptr:data)
//     {
//         std::cout<<*ptr<<"\n";
//     }
// }

//Map

// void CreateObjects(MContainer &data)
// {
//     data.emplace(std::make_pair<std::string,ElectricVehiclePointer>("D101",std::make_shared<EvCar>(120,VehicleType::REGULAR,10000,5,600,100,ChargingType::AC)));
//     data.emplace(std::make_pair<std::string,ElectricVehiclePointer>("k102",std::make_shared<EvCar>(121,VehicleType::TRANSPORT,20000,6,400,90,ChargingType::DC_FAST_CHARGE)));
//     data.emplace(std::make_pair<std::string,ElectricVehiclePointer>("E202",std::make_shared<Ev2Wheeler>(110,VehicleType::REGULAR,15000,5,600,100,ConnectedTechType::DIGITAL)));
// }

// void Display(MContainer &data)
// {
//     for(auto& ptr:data)
//     {
//         std::cout<<ptr.first<<"\n";
//     }
// }
