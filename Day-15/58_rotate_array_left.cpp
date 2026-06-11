#include <iostream>
void rotateArrayLeft(int arr[], int arr_size);
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
    rotateArrayLeft(arr, arr_size);
    return 0;
}

void rotateArrayLeft(int arr[], int arr_size)
{
    int position,rotated_arr[100],j=0;
    std::cout<<"Enter a number by how many places to shift left"<<std::endl;
    std::cin>>position;
    for (int i=position;i<arr_size;i++)
    {
        rotated_arr[j]=arr[i];
        j++;
    }
    for (int i=0;i<position;i++)
    {
        rotated_arr[j]=arr[i];
        j++;
    }
    std::cout<<"The left rotated array by "<<position<<" position is : "<<std::endl;
    for (int i=0;i<arr_size;i++)
    {
        std::cout<<rotated_arr[i]<<std::endl;
    }
}
