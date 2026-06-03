#include <iostream>
int sumOfDigits(int num);

int main()
{
    int num;
    std::cout<<"Enter a number to get sum of its digits"<<std::endl;
    std::cin>>num;
    std::cout<<"Sum of digits of "<<num<<" is "<<sumOfDigits(num)<<std::endl;
    return 0;
}

int sumOfDigits(int num)
{   
    if (num==0)
    {
        return 0;
    }
    return (num%10)+sumOfDigits(num/10);
}