#include <iostream>
#include <cstring>
int main()
{
    char string[100];
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(string,100);
    for (int i=0;i<strlen(string);i++)
    {
        int count=0;
        int alreadycounted=0;
        for (int k=0;k<i;k++)
        {
            if (string[i]==string[k])
            {
                alreadycounted=1;
            }

        }
        if (alreadycounted==1)
        {
            continue;
        }
        for (int j=0;j<strlen(string);j++)
        {
            if (string[i]==string[j])
            {
                count++;
            }
        }
        std::cout<<"The frequency of "<<string[i]<<" is "<<count<<std::endl;
    }
    return 0;
}