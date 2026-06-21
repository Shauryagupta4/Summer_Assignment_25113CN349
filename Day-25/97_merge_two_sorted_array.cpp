#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    std::vector<int> merged_array;
    int n1,n2;
    std::cout<<"Enter array 1 size"<<std::endl;
    std::cin>>n1;
    std::vector<int>arr1(n1);
    std::cout<<"Enter 1st array elements: "<<std::endl;
    for (int i=0;i<n1;i++)
    {
        std::cin>>arr1[i];
        merged_array.push_back(arr1[i]);
    }
    std::cout<<"Enter array 2 size"<<std::endl;
    std::cin>>n2;
    std::vector<int> arr2(n2);
    std::cout<<"Enter 2nd array elements: "<<std::endl;
    for (int i=0;i<n2;i++)
    {
        std::cin>>arr2[i];
        merged_array.push_back(arr2[i]);

    }
    sort(merged_array.begin(),merged_array.end());
    std::cout<<"Sorted merged array is : "<<std::endl;
    for (int i=0;i<merged_array.size();i++)
    {
        std::cout<<merged_array[i]<<" ";
    }
    return 0;
}