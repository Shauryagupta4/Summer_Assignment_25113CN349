#include <iostream>
long long powerRaise(long base,long power)
{
    long long final_value=1;
    while (power>0)
    {
        final_value*=base;
        power--;
    }
    return final_value;
}


int main()
{
    long long base,power;
    std::cout<<"Enter a base number"<<std::endl;
    std::cin>>base;
    std::cout<<"Enter the power"<<std::endl;
    std::cin>>power;

    std::cout<<"The "<<base<<"^"<<power<<" is "<<powerRaise(base,power)<<std::endl;
    return 0;
}