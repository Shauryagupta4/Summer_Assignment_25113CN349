#include <iostream>
#include <cstring>
int main()
{
    char sentence[100],max_occurence[100];
    int word_count=1;
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(sentence,100);
    std::cout<<"First non repeating character"<<std::endl;
    int max_count=0;
    for (int i=0;i<strlen(sentence);i++)
    {
        int count=0;
        for (int j=i+1;j<strlen(sentence);j++)
        {
            if (sentence[i]==sentence[j])
            {
                count++;
            }
        }
        if (count>max_count)
        {
            max_count=count;
            max_occurence[0]=sentence[i];
        }
    }
    std::cout<<"The maximum occuring character is : "<<max_occurence<<std::endl;
    return 0;
}