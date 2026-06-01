#include <iostream>

long long largest_prime_factor(long long num)
{
    long long largest_prime=0;
   
    for (int i=2;i*i<=num;i++)
    {
        while (num%i==0)
        {
            largest_prime=i;
            num/=i;
        }
    }
    if (num>1)
    {
        largest_prime=num;
    }
    return largest_prime;
}


int main()
{
    long long num;
    std::cout<<"Enter a number to find its largest prime factor"<<std::endl;
    std::cin>>num;
    
    std::cout<<"The largest prime factor of "<<num<<" is "<<largest_prime_factor(num);
    return 0;
}

