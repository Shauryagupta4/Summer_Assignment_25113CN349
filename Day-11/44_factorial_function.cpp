#include <iostream>
long long factorial(long long num);

int main()
{
    long long num;
    std::cout<<"Enter the number "<<std::endl;
    std::cin>>num;
    std::cout<<"The "<<num<<"! is "<<factorial(num);
    return 0;
}

long long factorial(long long num)
{
    long long fact=1;
    while (num>0)
    {
        fact*=num;
        num--;
    }
    return fact;
}