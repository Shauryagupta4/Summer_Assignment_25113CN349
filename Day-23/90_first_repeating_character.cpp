#include <iostream>
#include <cstring>
int main()
{
    char sentence[100];
    int word_count=1;
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(sentence,100);
    std::cout<<"First repeating character"<<std::endl;
    for (int i=0;i<strlen(sentence);i++)
    {
        int alreadycounted=0;
        for (int k=0;k<i;k++)
        {
            if (sentence[i]==sentence[k])
            {
                alreadycounted=1;
            }
        }
        if (alreadycounted==1)
        {
            continue;
        }
        int check=1;
        for (int j=i+1;j<strlen(sentence);j++)
        {
            if (sentence[i]==sentence[j])
            {
                check=0;
            }
        }
        if (check==0)
        {
            std::cout<<sentence[i];
            return 0;
        }
    }
    std::cout<<"No repeating character"<<std::endl;
    return 0;
}