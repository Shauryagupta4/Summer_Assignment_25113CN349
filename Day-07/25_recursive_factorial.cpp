#include <iostream>

long long factorial(long long num)
{
    if (num==0||num==1)
    {
        return 1;
    }
    return num*factorial(num-1);
}

int main()
{
    long long num;
    std::cout<<"Enter a number to find its factorial"<<std::endl;
    std::cin>>num;
    while (num<0)
    {
        std::cout<<"Enter a positive number"<<std::endl;
        std::cin>>num;
    }
    std::cout<<"The faactorial of "<<num<<" is "<<factorial(num)<<std::endl;
    return 0;
}