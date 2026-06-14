#include <iostream>
void descendingOrderSort(int arr[], int arr_size);
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
    std::cout<<"The sorted array in descending order is: "<<std::endl;
    descendingOrderSort(arr,arr_size);
    return 0;
}

void descendingOrderSort(int arr[], int arr_size)
{
    for (int i=0;i<arr_size;i++)
    {
        for (int j=0;j<arr_size-i-1;j++)
        {
            if (arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<arr_size;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
} 