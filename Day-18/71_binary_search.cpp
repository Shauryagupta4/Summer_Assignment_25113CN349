#include <iostream>
int binarySearch(int arr[], int arr_size, int target);
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
    std::cout<<"The element "<<target<<" is at index "<<binarySearch(arr,arr_size,target)<<std::endl;
    return 0;
}

int binarySearch(int arr[], int arr_size, int target)
{
    int mid,high=arr_size-1,low=0;
    while (low<=high)
    {
        mid=(high+low)/2;
        if (arr[mid]==target)
        {
            return mid;
        }
        else if (arr[mid]>target)
        {
            high=mid-1;
        }
        else if (arr[mid]<target)
        {
            low=mid+1;
        }
    }
} 