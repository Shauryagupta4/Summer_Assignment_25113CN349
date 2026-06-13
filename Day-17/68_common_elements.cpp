#include <iostream>
void commonElements(int arr1[], int arr2[], int arr_size1, int arr_size2);
int main()
{
    int arr1[100],arr2[100],arr_size1,arr_size2;
    std::cout<<"Enter the 1st array size"<<std::endl;
    std::cin>>arr_size1;
    std::cout<<"Enter the 2nd array size"<<std::endl;
    std::cin>>arr_size2;
    std::cout<<"Enter the 1st array elements : "<<std::endl;
    for (int i=0;i<arr_size1;i++)
    {
        std::cin>>arr1[i];
    }
    std::cout<<"Enter the 2nd array elements : "<<std::endl;
    for (int i=0;i<arr_size2;i++)
    {
        std::cin>>arr2[i];
    }
    std::cout<<"The common elements of two arrays are : "<<std::endl;
    commonElements(arr1,arr2,arr_size1,arr_size2);
    return 0;
}

void commonElements(int arr1[], int arr2[], int arr_size1, int arr_size2)
{
    int k=0;
    for (int i=0;i<arr_size1;i++)
    {
        int alreadycounted=1;
        for (int k=0;k<i;k++)
        {
            if (arr1[k]==arr1[i])
            {
                alreadycounted=0;
            }
        }
        if (alreadycounted==0)
        {
            continue;
        }
        for (int j=0;j<arr_size2;j++)
        {
            if (arr1[i]==arr2[j])
            {
                std::cout<<arr1[i]<<std::endl;
                break;
            }
        }
    }
}