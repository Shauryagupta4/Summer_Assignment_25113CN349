#include <iostream>
void perfectNumber(int num);
int main()
{
    int num;
    std::cout<<"Enter a number to check if it is perfect or not"<<std::endl;
    std::cin>>num;
     while (num<0)
    {
        std::cout<<"Enter a number greater then 0"<<std::endl;
        std::cin>>num;
    }
    perfectNumber(num);

    return 0;
}

void perfectNumber(int num)
{
    int sum=0;
    if (num==0)
    {
        std::cout<<num<<" is not a perfect number"<<std::endl;
        return ;
    }
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
}