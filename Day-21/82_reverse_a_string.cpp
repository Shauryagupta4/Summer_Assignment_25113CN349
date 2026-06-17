#include <iostream>
#include <cstring>
int main()
{
    char string[100];
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(string,100);
    int low=0;
    int high=strlen(string)-1;
    while (low<high)
    {
        int temp=string[low];
        string[low]=string[high];
        string[high]=temp;
        low++;
        high--;
    }
    std::cout<<"The reversed string is : "<<string<<std::endl;
    return 0;
}