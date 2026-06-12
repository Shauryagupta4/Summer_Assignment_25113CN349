#include <iostream>
int removeDuplicateElement(int arr[], int arr_size);
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
    std::cout<<"The new array after removing duplicate is:"<<std::endl;
    removeDuplicateElement(arr,arr_size);
    return 0;
}

int removeDuplicateElement(int arr[], int arr_size)
{
    for (int i=0;i<arr_size;i++)
    {
        for (int j=i+1;j<arr_size;j++)
        {
            if (arr[i]==arr[j])
            {
                while (j<arr_size)
                {
                    arr[j]=arr[j+1];
                    j++;
                }
                arr_size--;
            }
            else
            {
                continue;
            }
        }
    }
    for (int i=0;i<arr_size;i++)
    {
        std::cout<<arr[i]<<std::endl;
    }
}

