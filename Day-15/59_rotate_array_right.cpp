#include <iostream>
void rotateArrayRight(int arr[], int arr_size);
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
    rotateArrayRight(arr, arr_size);
    return 0;
}

void rotateArrayRight(int arr[], int arr_size)
{
    int position,rotated_arr[100],j=0;
    std::cout<<"Enter a number by how many places to shift right : "<<std::endl;
    std::cin>>position;
    for (int i=arr_size-position;i<arr_size;i++)
    {
        rotated_arr[j]=arr[i];
        j++;
    }
    for (int i=0;i<arr_size-position;i++)
    {
        rotated_arr[j]=arr[i];
        j++;
    }
    std::cout<<"The right rotated array by "<<position<<" position is : "<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cout<<rotated_arr[i]<<std::endl;
    }
}
