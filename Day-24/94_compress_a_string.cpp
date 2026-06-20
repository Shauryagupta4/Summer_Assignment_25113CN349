#include <iostream>
#include <cstring>
int main()
{
    char str[100];
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(str,100);
    int count=1;
    for (int i=0;i<strlen(str);i++)
    {
        if (str[i]==str[i+1])
        {
            count++;
        }
        else
        {
            std::cout<<str[i]<<count;
            count=1;
        }
    }
    return 0;
} 