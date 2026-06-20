#include <iostream>
#include <cstring>
int main()
{
    char str[100];
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(str,100);
    int n = strlen(str);
    int startIndex = 0, maxLength = 0;
    int currentStart = 0, currentLength = 0;
    for (int i = 0; i <= n; i++) {
        if (i == n || str[i] == ' ') {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                startIndex = currentStart;
            }
            currentLength = 0;
            currentStart = i + 1;
        } else {
            currentLength++;
        }
    }
    for (int i=startIndex;i<startIndex+maxLength;i++)
    {
        std::cout<<str[i];
    }
    return 0;
} 