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
        if (string[low]==string[high])
        {
            low++;
            high--;
        }
        else
        {
            std::cout<<"It is not a palindrome"<<std::endl;
            return 0;
        }
        
    }
    std::cout<<"It is a palindrome"<<std::endl;
    return 0;
}