#include <iostream>
int main()
{
    int num1, num2, rem=1;
    std::cout<<"Enter the 1st number";
    std::cin>>num1;
    std::cout<<"Enter the 2nd number";
    std::cin>>num2;
    int cpy1=num1;
    int cpy2=num2;
    while (rem>0)
    {
        rem=cpy1%cpy2;
        cpy1=cpy2;
        cpy2=rem;
    }
    int gcd=cpy1;
    int lcm=(num1*num2)/gcd;
    std::cout<<"LCM of"<<num1<<" and "<<num2<<" is "<<lcm;
    return 0;
}