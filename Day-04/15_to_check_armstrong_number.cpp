#include <iostream>
#include <cmath>
int main()
{
    int num,cpy1,cpy2,count=0,result=0;
    std::cout<<"Enter a number to check whether it is armstrong or not";
    std::cin>>num;
    cpy1=num;
    while (cpy1>0)
    {
        cpy1=cpy1/10;
        count++;
    }
    cpy2=num;
    while (cpy2>0)
    {
        int rem=cpy2%10;
        result=result+round(pow(rem,count));
        cpy2/=10;
    }
    
    if (num==result)
    std::cout<<num<<" is an armstrong number";
    else
    std::cout<<num<<" is not an armstrong number";
    return 0;
}