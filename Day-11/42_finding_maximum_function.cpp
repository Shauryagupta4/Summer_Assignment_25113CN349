#include <iostream>
int maximum(int num1,int num2,int num3);

int main()
{
    int num1,num2,num3;
    std::cout<<"Enter first number"<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter second number"<<std::endl;
    std::cin>>num2;
    std::cout<<"Enter fourth number"<<std::endl;
    std::cin>>num3;
    std::cout<<"The maximum from "<<num1<<","<<num2<<","<<num3<<" is "<<maximum(num1,num2,num3)<<std::endl;
    return 0;
}

int maximum(int num1, int num2, int num3)
{
    if (num1>=num2 && num1>=num3)
    {
        return num1;
    }
    if (num2>=num1 && num2>=num3)
    {
        return num2;
    }
    if (num3>=num1 && num3>=num1)
    {
        return num3;
    }
}