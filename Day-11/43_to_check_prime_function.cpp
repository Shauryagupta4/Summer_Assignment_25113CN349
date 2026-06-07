#include <iostream>
void checkPrime(int num);

int main()
{
    int num;
    std::cout<<"Enter a number to check if it is prime or not"<<std::endl;
    std::cin>>num;
    while (num<1)
    {
        std::cout<<"Enter a valid positive integer"<<std::endl;
        std::cin>>num;
    }
    checkPrime(num);
    return 0;
}

void checkPrime(int num)
{
    int check=0;
    if (num==1)
    {
        std::cout<<"It is neither prime nor composite"<<std::endl;
        return ;
    }
    for (int i=2;i<=num/2;i++)
    {
        if (num%i==0)
        {
            check=1;
        }
    }
    if (check==1)
    {
        std::cout<<"It is a composite number"<<std::endl;
    }
    else
    {
        std::cout<<"It is a Prime Number"<<std::endl;
    }
}