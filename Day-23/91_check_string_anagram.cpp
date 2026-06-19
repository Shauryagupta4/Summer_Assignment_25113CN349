#include <iostream>
#include <cstring>
int main()
{
    char str1[100], str2[100];
    std::cout<<"Enter 1st string "<<std::endl;
    std::cin.getline(str1,100);
    std::cout<<"Enter 2nd string "<<std::endl;
    std::cin.getline(str2,100);
    if (strlen(str1) != strlen(str2))
    {
        std::cout<<"Not an anagram"<<std::endl;
        return 0;
    }
    for (int i=0;i<strlen(str1);i++)
    {
        int check=0;
        for (int j=0;j<strlen(str2);j++)
        {
            if (str1[i]==str2[j])
            {
                check=1;
            }
        }
        if (check==0)
        {
            std::cout<<"Not an anagram"<<std::endl;
            return 0;
        }
    }
    std::cout<<"It is an anagram"<<std::endl;
    return 0;
}