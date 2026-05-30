#include <iostream>
int main()
{
    int num,check=0;
    std::cout<<"Enter a number till which you want to find all prime numbers";
    std::cin>>num;

    if (num<2)
    {
        std::cout<<num<<" is neither prime nor composite. Number should be greater then 1"<<std::endl;
        return 0;
    }
    for (int i=2;i<=num;i++)
    {
        for (int j=2;j<i;j++)
        {
            if (i%j==0)
            {
                check=1;
                break;
            }
            else
            {
                check=0;
            }
        }
        if (check==0)
        std::cout<<i<<std::endl;
    }
    return 0;
}