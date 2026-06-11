#include <iostream>
void reverseArray(int arr[], int arr_size);
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
    std::cout<<"The reversed array is : "<<std::endl;
    reverseArray(arr, arr_size);
    return 0;
}

void reverseArray(int arr[], int arr_size)
{
    int rev_arr[100];
    for (int i=arr_size;i>0;i--)
    {
        rev_arr[arr_size-i]=arr[i-1];
        std::cout<<rev_arr[arr_size-i]<<std::endl;
    }
}
