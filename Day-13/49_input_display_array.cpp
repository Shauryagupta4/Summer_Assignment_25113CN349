#include <iostream>
int main()
{
    int arr[100],arr_size;
    std::cout<<"Enter the array size"<<std::endl;
    std::cin>>arr_size;
    std::cout<<"Enter the array elements"<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"Array Elements are:"<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
    return 0;
}