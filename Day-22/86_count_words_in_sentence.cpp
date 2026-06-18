#include <iostream>
#include <cstring>
int main()
{
    char sentence[100];
    int word_count=1;
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(sentence,100);
    int i=0;
    while (i<strlen(sentence))
    {
        if (sentence[i] == ' ')
        {
            word_count++;
        }
        i++;
    }
    std::cout<<"The total words in the sentence  are : "<<word_count<<std::endl;
    return 0;
}