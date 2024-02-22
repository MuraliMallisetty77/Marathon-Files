#include"Functionalities.h"
#include<thread>
#include<future>

int main()
{
//     Container data;
//     Container data1;
//     CreateObjects(data);
    
//     // try
//     // {
//     //     std::promise<int> pr;
//     //     std::future<int> ft=pr.get_future();
//     //     std::future<void> res1=std::async(std::launch::async,DisplayAllInstancesById,std::ref(data),std::ref(ft));
//     //     int id;
//     //     std::cout<<"Enter id:";
//     //     std::cin>>id;
//     //     pr.set_value(id);
//     //     res1.get();
//     // }
//     // catch(EmptyContainerException& e)
//     // {
//     //     std::cout<<e.what()<<"\n";
//     // }
//     // std::cout<<"-----------------------------------------------------------------------"<<"\n";
//     std::future<void> fCall;
//     //std::thread t1;
//     try
//     {
//         //std::cout<<"in try\n";
//         //std::thread t1(DisplayAveragePriceOfEvCarByEngineHorsePower,std::ref(data1));
//         fCall = std::async(std::launch::async,DisplayAveragePriceOfEvCarByEngineHorsePower,std::ref(data));
//         fCall.get();
        
//         //DisplayAveragePriceOfEvCarByEngineHorsePower(data1);

       
//     }
//     catch(EmptyContainerException& e)
//     {
        
//         std::cout<<e.what()<<"\n";
//     }
    
//     std::cout<<"----------------------------------------------------------------------------"<<"\n";
    
//     std::future<std::optional<Container>> res1;
//     try
//     {

//         res1=std::async(std::launch::async,ReturnInstancesByPrice,std::ref(data),10000);
//         // std::optional<Container> result=ReturnInstancesByPrice(data,10000);
//         // if(result.has_value())
//         // {
//         //     std::lock_guard<std::mutex> lk(mt);
//         //     std::cout<<"All instances of having high price over given threshold"<<"\n";
//         //     for(ElectricVehiclePointer& ptr:result.value())
//         //     {
//         //     std::shared_ptr<EvCar> car=std::dynamic_pointer_cast<EvCar>(ptr);
//         //         if(car!=nullptr)
//         //         {
                    
//         //             std::cout<<*car<<"\n";
//         //         }
//         //         else
//         //         {
//         //             std::shared_ptr<Ev2Wheeler> bike=std::dynamic_pointer_cast<Ev2Wheeler>(ptr);
//         //             std::cout<<*bike<<"\n";
//         //         }
//         //     }
//         // }
//         // else{
            
//         //     std::cout<<"No instances found!!!!"<<"\n";
//         // }
//     }
//     catch(EmptyContainerException& e)
//     {
//         std::cout<<e.what()<<"\n";
//     }

//     std::thread t1(display);
//    // fCall.get();
//     t1.join();
   
//     std::optional<Container> re=res1.get();
//     if(re.has_value())
//         {
//             //std::lock_guard<std::mutex> lk(mt);
//             std::cout<<"All instances of having high price over given threshold"<<"\n";
//             for(ElectricVehiclePointer& ptr:re.value())
//             {
//             std::shared_ptr<EvCar> car=std::dynamic_pointer_cast<EvCar>(ptr);
//                 if(car!=nullptr)
//                 {
                    
//                     std::cout<<*car<<"\n";
//                 }
//                 else
//                 {
//                     std::shared_ptr<Ev2Wheeler> bike=std::dynamic_pointer_cast<Ev2Wheeler>(ptr);
//                     std::cout<<*bike<<"\n";
//                 }
//             }
//         }
//         else{
            
//             std::cout<<"No instances found!!!!"<<"\n";
//         }

        
    
//Map
    // MapContainer data;
    // CreateObjects(data);

    // std::optional<MapContainer> result=ReturnInstancesByPrice(data,10000);
    // if(result.has_value())
    // {
    //     for(auto ptr:result.value())
    //     {
    //         std::cout<<*(ptr.second)<<"\n";
    //     }
    // }
    // else
    // {
    //     std::cout<<"no instance found"<<"\n";
    // }

    // std::cout<<find(data);


//Priority Queue

    // Pcontainer data;
    // CreateObjects(data);
    // display(data);


//Set
    // SetContainer data;
    // CreateObjects(data);
    // Display(data);


//Map
    MContainer data;
    CreateObjects(data);
    Display(data);





    return 0;
}