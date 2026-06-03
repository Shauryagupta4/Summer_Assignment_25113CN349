#include <iostream>
int main()
{
    int num1, num2, rem=1;
    std::cout<<"Enter the 1st number"<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter the 2nd number"<<std::endl;
    std::cin>>num2;
    int cpy1=num1;
    int cpy2=num2;
    while (rem>0)
    {
        rem=cpy1%cpy2;
        cpy1=cpy2;
        cpy2=rem;
    }
    if (cpy2==0)
        std::cout<<"GCD of "<<num1<<" and "<<num2<<" is "<<cpy1;
    return 0;
}