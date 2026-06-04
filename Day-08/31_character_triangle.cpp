#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of rows";
    std::cin>>num;
    for (int i=1;i<=num;i++)
    {
        for (int j='A';j<65+i;j++)
        {
            std::cout<<(char)j;
        }
        std::cout<<std::endl;
    }
    return 0;
}

/*
output for num=5
A
AB
ABC
ABCD
ABCDE
*/