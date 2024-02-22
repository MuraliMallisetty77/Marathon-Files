#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>

int main()
{
    std::string arr[]={"ravi","zaman","vijay","chandra"};
    // std::string *begin=std::begin(arr);
    // std::string *end=std::end(arr);
    // while(end!=begin)//by using max element
    // {
    // std::string *max=std::max_element(begin,end);
    // std::cout<<"\nmax element:"<<*max<<"\n";
    // std::swap(*(end-1),*max);
    // for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    // {
    //     std::cout<<arr[i]<<" ";
    // }
    // end--;
   // }
    // while(begin!=end)//by using min element
    // {
    //     std::string *min=std::min_element(begin,end);
    //     std::cout<<"\nmax element:"<<*min<<"\n";
    //     std::swap(*begin,*min);
    //     for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    //     {
    //         std::cout<<arr[i]<<" ";
    //     }
    //     begin++;;
    // }

/*  for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        std::string *min=std::min_element(std::begin(arr)+i,std::end(arr));
        std::swap(arr[i],*min);
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        std::cout<<arr[i]<<" ";
    }
*/
    for(int i=sizeof(arr)/sizeof(arr[0])-1;i>=0;i--)
    {
        std::string *max=std::max_element(arr,arr+i+1);
        std::swap(arr[i],*max);
    }
    // for(int i=3;i>=0;i--)
    // {
    //     std::string *max=std::max_element(arr,arr+i+1);
    //     std::swap(arr[i],*max);
    // }
    for(int i=0;i<4;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    return 0;

}