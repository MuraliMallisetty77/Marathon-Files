#include<iostream>
#include<algorithm>
#include<string>
int main()
{
    int arr[]={4,10,12,4};
    
    int *p=std::max_element(arr,arr+3);
    std::cout<<*p<<"\n";
    std::cout<<p-arr<<"\n";
    int *q=std::min_element(arr,arr+3);
    std::cout<<*q<<"\n";
    std::cout<<q-arr<<"\n";
    int i=q-arr;
    std::cout<<i<<"\n";
    std::cout<<std::min_element(arr,arr+3);



    return 0;
}
