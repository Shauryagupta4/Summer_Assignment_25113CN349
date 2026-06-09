#include <iostream>
int main()
{
    int arr[100],arr_size,arr_sum=0; 
    std::cout<<"Enter the array size"<<std::endl;
    std::cin>>arr_size;
    std::cout<<"Enter the array elements"<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cin>>arr[i];
    }
    int largest_element=arr[0],smallest_element=arr[0];
    for (int i=1;i<arr_size;i++)
    { 
        if (arr[i]>largest_element)
        {
            largest_element=arr[i];
        }
        if (arr[i]<smallest_element)
        {
            smallest_element=arr[i];
        }
    }
    std::cout<<"The largest element in the array is "<<largest_element<<std::endl;
    std::cout<<"The smallest element in the array is "<<smallest_element<<std::endl;
    return 0;
}