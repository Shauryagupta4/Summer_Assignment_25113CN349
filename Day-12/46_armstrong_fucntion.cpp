#include <iostream>
void armstrong(int num);

int main()
{
    int num;
    std::cout<<"Enter a number check if it is armstrong or not"<<std::endl;
    std::cin>>num;
    while (num<0)
    {
        std::cout<<"Enter a number greater then 0"<<std::endl;
        std::cin>>num;
    }
    armstrong(num);
    return 0;
}

void armstrong(int num)
{
    int digit, num1,num2,digit_count=0,sum=0;
    num1=num;
    while (num1>0)
    {
        num1/=10;
        digit_count++;
    }
    num2=num;
    while (num2>0)
    {
        int power_raise=1;
        digit=num2%10;
        for (int i=1;i<=digit_count;i++)
        {
            power_raise*=digit;
        }
        sum+=power_raise;
        num2/=10;
    }
    if (sum==num)
    {
        std::cout<<num<<" is an armstrong number"<<std::endl;
    }
    else
    {
        std::cout<<num<<" is not an armstrong number"<<std::endl;
    }
}