#include <iostream>
void BinaryToDecimal(int binary)
{
    int i=0,decimal=0,base=1,digit,bin;
    bin=binary;
    if (bin==0)
    {
        std::cout<<"The decimal value of "<<bin<<" is 0"<<std::endl;
        return ;
    }
    while (bin>0)
    {
        digit=bin%10;
        if (digit !=0 && digit !=1)
        {
            std::cout<<"Not a valid binary number";
            return ;
        }
        decimal+=(digit*base);
        bin/=10;
        i++;
        base*=2;
    }
    std::cout<<"The decimal value of "<<binary<<" is "<<decimal<<std::endl;
}

int main()
{
    int binary;
    std::cout<<"Enter a binary number to convert into decimal";
    std::cin>>binary;
    BinaryToDecimal(binary);
    return 0;
}