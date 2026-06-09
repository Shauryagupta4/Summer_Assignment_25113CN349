#include <iostream>
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
    int odd_count=0,even_count=0;
    for (int i=0;i<arr_size;i++)
    {
        if (arr[i]%2==0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }
    std::cout<<"The number of odd elements in the array are: "<<odd_count<<std::endl;
    std::cout<<"The number of even elements in the array are: "<<even_count<<std::endl;
    return 0;
}