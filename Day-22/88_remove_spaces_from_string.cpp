#include <iostream>
#include <cstring>
int main()
{
    char string[100],new_string[100];
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(string,100);
    int i=0,j=0;
    while (i<strlen(string))
    {
        if (string[i] != ' ')
        {
            new_string[j]=string[i];
            j++;
        }
        i++;
    }
    std::cout<<"The new string without spaces is : "<<new_string<<std::endl;
    return 0;
}