#include <iostream>
int pairWithGivenSum(int arr[], int arr_size, int target);
int main()
{
    int arr[100],arr_size,target;
    std::cout<<"Enter the array size"<<std::endl;
    std::cin>>arr_size;
    std::cout<<"Enter the target sum: "<<std::endl;
    std::cin>>target;
    std::cout<<"Enter the array elements of n natural numbers: "<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"The pair(s) are/is : "<<std::endl;
    pairWithGivenSum(arr, arr_size,target);
    return 0;
}

int pairWithGivenSum(int arr[], int arr_size, int target)
{
    for (int i=0;i<arr_size;i++)
    {
        for (int j=i+1;j<arr_size;j++)
        {
            if (arr[i] + arr[j] == target)
            {
                std::cout<<arr[i]<<","<<arr[j]<<std::endl;;
            }
        }
    }
}
