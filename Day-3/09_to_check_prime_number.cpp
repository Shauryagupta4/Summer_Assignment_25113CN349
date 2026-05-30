#include <iostream>
int main()
{
    int num,check=0;
    std::cout<<"Enter a number to check whether it is prime or not";
    std::cin>>num;

    if (num<2)
    {
        std::cout<<num<<" is neither prime nor composite. Number should be greater then 1";
        return 0;
    }
    for (int i=2;i<=(num/2);i++)
    {
        if (num%i==0)
            check=1;
    }
    if (check==1)
        std::cout<<num<<" is not a prime number";
    else 
        std::cout<<num<<" is a prime number";
    return 0;
}