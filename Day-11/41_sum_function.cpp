#include <iostream>
int sumOfTwoNum(int num1,int num2);

int main()
{
    int num1,num2;
    std::cout<<"Enter the first number"<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter the second number"<<std::endl;
    std::cin>>num2;
    std::cout<<"SUM:"<<std::endl<<num1<<"+"<<num2<<"="<<sumOfTwoNum(num1,num2);
    return 0;
}

int sumOfTwoNum(int num1,int num2)
{
    return num1+num2;
}
