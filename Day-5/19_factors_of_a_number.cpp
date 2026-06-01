#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter a number to get all the factors"<<std::endl;
    std::cin>>num;
    std::cout<<"Factors of "<<num<<" are:"<<std::endl;
    for (int i=1;i<=num;i++)
    {
        if (num%i==0)
            {
                std::cout<<i<<std::endl;
            }
    }
    return 0;
}