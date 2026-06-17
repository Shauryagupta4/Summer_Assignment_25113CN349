#include <iostream>
#include <cstring>
int main()
{
    char string[100];
    std::cout<<"Enter a string "<<std::endl;
    std::cin>>string;
    int vowel_count=0,consonant_count=0;
    for (int j=0;j<strlen(string);j++)
    {
        if (string[j]=='a' || string[j]=='e' || string[j]=='i' || string[j]=='o' || string[j]=='u' || string[j]=='A' || string[j]=='E' || string[j]=='I' || string[j]=='O' || string[j]=='U')
        {
            vowel_count+=1;
        }
        else
        {
            consonant_count+=1;
        }
    }
    std::cout<<"The vowel count in string is : "<<vowel_count<<std::endl;
    std::cout<<"The consonant count in string is : "<<consonant_count<<std::endl;
    return 0;
}