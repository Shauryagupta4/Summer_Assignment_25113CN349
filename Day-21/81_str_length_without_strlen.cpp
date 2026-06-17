#include <iostream>
int main()
{
    char str[100];
    std::cout<<"Enter a string "<<std::endl;
    std::cin.getline(str,100);
    int length=0;
    while (str[length] != '\0')
    {
        length++;
    }
    std::cout<<"The length of "<<str<<" is "<<length<<std::endl;
    return 0;
}