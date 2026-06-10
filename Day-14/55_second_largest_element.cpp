#include <iostream>
int secondLargestElement(int arr[], int arr_size);
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
    std::cout<<"The second largest element of the array is "<<secondLargestElement(arr,arr_size)<<std::endl;
    return 0;
}

int secondLargestElement(int arr[], int arr_size)
{
    int largest=arr[0],second_largest=INT16_MIN;
    for (int i=0;i<arr_size;i++)
    {
        if (arr[i]>largest)
        {
            second_largest=largest;
            largest=arr[i];
        }
        else if (arr[i]>second_largest)
        {
            second_largest=arr[i];
        }
    }
    return second_largest;
}