#include <iostream>
void moveZeroesToEnd(int arr[], int arr_size);
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
    moveZeroesToEnd(arr, arr_size);
    return 0;
}

void moveZeroesToEnd(int arr[], int arr_size)
{
    int non_zeroes[100],j=0;
    for (int i=0;i<arr_size;i++)
    {
        if (arr[i]!=0)
        {
            non_zeroes[j++]=arr[i];
        }
    }
    int zeroes=arr_size-j+1;
    for (int i=0;i<=j;i++)
    {
        arr[i]=non_zeroes[i];
    }
    for (int i=j;i<arr_size;i++)
    {
        arr[i]=0;
    }
    std::cout<<"The new array is : "<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}