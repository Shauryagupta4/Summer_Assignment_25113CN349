#include <iostream>
int missingNumber(int arr[], int arr_size);
int main()
{
    int arr[100],arr_size;
    std::cout<<"Enter the array size"<<std::endl;
    std::cin>>arr_size;
    std::cout<<"Enter the array elements of n natural numbers: "<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"The missing number in the array is : "<<missingNumber(arr, arr_size)<<std::endl;
    return 0;
}

int missingNumber(int arr[], int arr_size)
{
    int expected_sum, actual_sum=0;
    expected_sum=(arr_size+1)*(arr_size+2)/2;
    for (int i=0;i<arr_size;i++) 
    {
        actual_sum+=arr[i];
    }
    return expected_sum - actual_sum;
}