#include <iostream>
int linearSearch(int arr[], int arr_size, int target);
int main()
{
    int arr[100],arr_size,target;
    std::cout<<"Enter the array size"<<std::endl;
    std::cin>>arr_size;
    std::cout<<"Enter the array elements"<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"Enter the target element to find"<<std::endl;
    std::cin>>target;
    std::cout<<"The element "<<target<<" is at index "<<linearSearch(arr,arr_size,target)<<std::endl;
    return 0;
}

int linearSearch(int arr[], int arr_size, int target)
{
    for (int i=0;i<arr_size;i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
} 