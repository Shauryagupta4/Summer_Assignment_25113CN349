#include <iostream>
int main()
{
    int arr[100],arr_size,arr_sum=0; 
    float arr_avg;
    std::cout<<"Enter the array size"<<std::endl;
    std::cin>>arr_size;
    std::cout<<"Enter the array elements"<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cin>>arr[i];
    }
    for (int i=0;i<arr_size;i++)
    {
        arr_sum+=arr[i];
    }
    std::cout<<"Sum of the elements of array are: "<<arr_sum<<std::endl;
    arr_avg=(float)arr_sum/arr_size;                     
    std::cout<<"Average of the elements of array are: "<<arr_avg<<std::endl; 
    return 0;
}