#include<iostream>
template<class T>
T mymax_element(T a,T b)
{
    T max=a;
    for(T i=a;i<b;i++)
    {
        if(*max<*i)
        max=i;
    }
    return max;
}

template<class T>
T mymin_element(T a,T b)
{
    T min=a;
    for(T i=a;i<b;i++)
    {
        if(*min>*i)
        {
            min=i;

        }
    }
    return min;
}
int main()
{
    int arr[]={1,2,3,4};
    int *p=mymax_element(std::begin(arr),std::end(arr));
    std::cout<<*p<<"\n";
    std::cout<<*(mymin_element(std::begin(arr),std::end(arr)));
    return 0;
}