#include <iostream>
int elementFrequency(int arr[], int arr_size);
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
    elementFrequency(arr,arr_size);
    return 0;
}

int elementFrequency(int arr[], int arr_size)
{
    int frequency=0;
    for (int i=0;i<arr_size;i++)
    {
        int alreadycounted=1;
        for (int k=0;k<i;k++)
        {
            if (arr[k]==arr[i])
            {
                alreadycounted=0;
            }
        }
        if (alreadycounted==0)
        {
            continue;
        }
        for (int j=0;j<arr_size;j++)
        {
            if (arr[i]==arr[j])
            {
                frequency++;
            }
        }
        std::cout<<"The frequency of "<<arr[i]<<" = "<<frequency<<std::endl;
        frequency=0;
    }
}