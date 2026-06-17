#include <iostream>
#include <cstring>
int main()
{
    char string[100];
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(string,100);
    for (int i=0;i<strlen(string);i++)
    {
        if (string[i]>='a' && string[i]<='z')
        {
            string[i]=string[i] -32;
        }
    }
    std::cout<<"The uppercase string is : "<<string<<std::endl;
    return 0;
}