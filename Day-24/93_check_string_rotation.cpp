#include <iostream>
#include <cstring>
int main()
{
    char sentence1[100],sentence2[100],merged[200];
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(sentence1,100);
    std::strcpy(merged, sentence1);
    std::strcat(merged, sentence1);
    std::cout<<"Enter second string "<<std::endl;
    std::cin.getline(sentence2,100);
    if (strlen(sentence1) != strlen(sentence2)) 
    {
        std::cout << "Not a string rotation" << std::endl;
        return 0;
    }
    int check = 0;
    for (int i = 0; i < strlen(sentence1); i++) 
    {
        int match = 1;
        for (int j = 0; j < strlen(sentence2); j++) 
        {
            if (merged[i + j] != sentence2[j]) 
            {
                match = 0; 
                break;
            }
        }
        if (match == 1) 
        {
            check = 1; 
            break;
        }
    }

    if (check==1)
    {
        std::cout<<"Yes it is string rotation"<<std::endl;
        return 0;
    }
    std::cout<<"Not a string rotation"<<std::endl;
} 