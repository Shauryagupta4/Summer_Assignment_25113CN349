#include <iostream>
int countingSetBits(int num)
{
    int set_bits=0;
    if (num==0)
    {
        std::cout<<"0"<<std::endl;
        return 0;
    }
    while (num>0)
    {
        if (num%2==1)
        {
            set_bits++;
        }
        num/=2;
    }
    return set_bits;
}

int main()
{
    int num;
    std::cout<<"Enter a number to count its set bits"<<std::endl;
    std::cin>>num;
    while (num<0)
    {
        std::cout<<"Enter a positive number";
        std::cin>>num;
    }
    std::cout<<"The number of set bits in "<<num<<" is "<<countingSetBits(num)<<std::endl;
    return 0;
}