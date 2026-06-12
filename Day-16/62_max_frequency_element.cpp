#include <iostream>
int maxFrequencyElement(int arr[], int arr_size);
int main()
{
    int arr[100],arr_size;
    std::cout<<"Enter the array size"<<std::endl;
    std::cin>>arr_size;
    std::cout<<"Enter the array elements: "<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cin>>arr[i];
    }
    std::cout<<"The maximum frequency element in the array is : "<<maxFrequencyElement(arr, arr_size)<<std::endl;
    return 0;
}

int maxFrequencyElement(int arr[], int arr_size)
{
    int max_count=0,max_element=0;
    for (int i=0;i<arr_size;i++)
    {
        int count=0;
        for (int j=0;j<arr_size;j++)
        {
            if (arr[i]==arr[j])
            {
                count++;
            }
        }
        if (count>max_count)
        {
            max_count=count;
            max_element=arr[i];
        }
    }
    return max_element;
}