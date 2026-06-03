#include <iostream>
int main()
{
    int num,sum=0;
    std::cout<<"Enter a number to check if it is perfect or not"<<std::endl;
    std::cin>>num;

    for (int i=1;i<num;i++)
    {
        if (num%i==0)
            {
                sum+=i;
            }
    }
    if (sum==num)
    {
        std::cout<<num<<" is a perfect number";
    }
    else
    {
        std::cout<<num<<" is not a perfect number";
    }
    return 0;
}