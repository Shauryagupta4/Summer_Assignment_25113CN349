#include <iostream>
void selectionSort(int arr[], int arr_size);
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
    std::cout<<"The sorted array is: "<<std::endl;
    selectionSort(arr,arr_size);
    return 0;
}

void selectionSort(int arr[], int arr_size)
{
    for (int i=0;i<arr_size;i++)
    {
        int min_index=i;
        for (int j=i+1;j<arr_size;j++)
        {
            if (arr[min_index]>arr[j])
            {
                min_index=j;
            }
        }
        if (min_index!=i)
        {
            int temp=arr[min_index];
            arr[min_index]=arr[i];
            arr[i]=temp;
        }
    }
    for (int i=0;i<arr_size;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
} 