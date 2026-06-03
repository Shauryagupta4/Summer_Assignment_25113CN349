#include <iostream>
void decimal_to_binary(int num, int binary[])
{
    int i=0;
    if (num==0)
    {
        std::cout<<"0"<<std::endl;
        return ;
    }
    while (num>0)
    {
        binary[i]=num%2;
        num/=2;
        i++;
    }
    for (int j = i-1;j>=0;j--)
    {
        std::cout<<binary[j];
    }
    std::cout<<std::endl;
}

int main()
{
    int num,binary[100];
    std::cout<<"Enter a decimal number to convert into binary";
    std::cin>>num;
    std::cout<<"The binary value of "<<num<<" is "<<std::endl;
    decimal_to_binary(num,binary);
    return 0;
}