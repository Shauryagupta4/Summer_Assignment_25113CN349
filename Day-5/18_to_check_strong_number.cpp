#include <iostream>
int main()
{
    int num,num1,digit,fact=1,factorial_sum=0;
    std::cout<<"Enter a number to check whether it is strong number or not"; /*sum of factorial of a numerber's digits equal to number itself is a strong number*/
    std::cin>>num;
    num1=num;
    while (num1>0)
    {
        digit=num1%10;
        for (int i=1;i<=digit;i++)
        {
            fact*=i;
        }
        factorial_sum+=fact;
        num1/=10;
        fact=1;
    }
    if (factorial_sum==num)
    {
        std::cout<<num<<" is a strong number";
    }
    else
    {
        std::cout<<num<<" is not a strong number";
    }
    return 0;
}