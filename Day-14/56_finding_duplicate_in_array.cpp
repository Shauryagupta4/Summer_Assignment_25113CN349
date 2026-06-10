#include <iostream>
int duplicateElement(int arr[], int arr_size);
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
    std::cout<<"The duplicate elements in array are:"<<std::endl;
    duplicateElement(arr,arr_size);
    return 0;
}

int duplicateElement(int arr[], int arr_size)
{
    int check_factor=0;
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
        for (int j=i+1;j<arr_size;j++)
        {
            if (arr[i]==arr[j])
            {
                check_factor=1;
                std::cout<<arr[i]<<std::endl;
                break;
            }
        }
    }
    if (check_factor==0)
        std::cout<<"NO DUPLICATE"<<std::endl;
        return 0;
}
