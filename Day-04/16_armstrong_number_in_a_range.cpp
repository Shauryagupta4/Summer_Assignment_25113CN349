#include <iostream>
#include <cmath>
int main()
{
    int num,cpy1,cpy2,count=0,result=0;
    std::cout<<"Enter a number to get range of armstrong number";
    std::cin>>num;
    if (num==0)
    {
        std::cout<<"0";
        return 0;
    }
    std::cout<<"All the armstrong number between 0 to "<<num<<" is"<<std::endl;
    std::cout<<"0"<<std::endl;
    for (int i=1;i<=num;i++)
    {
         cpy1=i;
        while (cpy1>0)
        {
            cpy1=cpy1/10;
            count++;
        }
        cpy2=i;
        while (cpy2>0)
        {
            int rem=cpy2%10;
            result=result+round(pow(rem,count));
            cpy2/=10;
        }
        count=0;
        if (result==i)
        {
            std::cout<<result<<std::endl;
        }
        result=0;
    }
    return 0;
}