#include <iostream>
void mergeArrays(int arr1[], int arr2[], int arr_size1, int arr_size2);
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
    std::cout<<"The merged array is : "<<std::endl;
    mergeArrays(arr1,arr2,arr_size1,arr_size2);
    return 0;
}

void mergeArrays(int arr1[], int arr2[], int arr_size1, int arr_size2)
{
    int new_size=arr_size1+arr_size2,j=0;
    for (int i=arr_size1;i<new_size;i++)
    {
        arr1[i]=arr2[j];
        j++;
    }
    for (int i=0;i<new_size;i++)
    {
        std::cout<<arr1[i]<<std::endl;
    }
}