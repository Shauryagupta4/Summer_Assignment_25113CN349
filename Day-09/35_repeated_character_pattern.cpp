#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of rows";
    std::cin>>num;
    for (int i='A';i<65+num;i++)
    {
        for (int j=65;j<=i;j++)
        {
            std::cout<<(char)i;
        }
        std::cout<<std::endl;
    }
    return 0;
}

/*
output for num=5
A
BB
CCC
DDDD
EEEEE
*/