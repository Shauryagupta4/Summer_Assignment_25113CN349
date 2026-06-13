#include <iostream>
void intersectionofArrays(int arr1[], int arr2[], int arr_size1, int arr_size2);
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
    std::cout<<"The intersection of arrays are : "<<std::endl;
    intersectionofArrays(arr1,arr2,arr_size1,arr_size2);
    return 0;
}

void intersectionofArrays(int arr1[], int arr2[], int arr_size1, int arr_size2)
{
    int intersection[100],k=0;
    for (int i=0;i<arr_size1;i++)
    {
        for (int j=0;j<arr_size2;j++)
        {
            if (arr1[i]==arr2[j])
            {
                intersection[k++]=arr1[i];
                break;
            }
        }
    }
    for (int i=0;i<k;i++)
    {
        for (int j=i+1;j<k;j++)
        {
            if (intersection[i]==intersection[j])
            {
                while (j<k)
                {
                    intersection[j]=intersection[j+1];
                    j++;
                }
                k--;
            }
        }
    }
    for (int i=0;i<k;i++)
    {
        std::cout<<intersection[i]<<std::endl;
    }
}