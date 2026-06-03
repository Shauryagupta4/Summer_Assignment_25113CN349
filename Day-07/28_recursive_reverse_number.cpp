#include <iostream>
int reverseNumber(int num,int reverse_number=0);

int main()
{
    int num;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>num;
    std::cout<<"Reverse of "<<num<<" is "<<reverseNumber(num)<<std::endl;
    return 0;
}

int reverseNumber(int num,int reverse_number)
{   
    if (num==0)
    {
        return reverse_number;
    }
    int digit=num%10;
    return reverseNumber(num/10,reverse_number*10 + digit);
}