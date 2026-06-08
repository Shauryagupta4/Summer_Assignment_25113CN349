#include <iostream>
void palindrome(int num);

int main()
{
    int num;
    std::cout<<"Enter the number to check if it is palindrome or not"<<std::endl;
    std::cin>>num;
    
    palindrome(num);
}

void palindrome(int num)
{
    int digit,rev=0,num1;
    num1=num;
    while (num1>0)
    {
        digit=num1%10;
        rev=rev*10+digit;
        num1/=10;
    }
    if (rev==num)
    {
        std::cout<<num<<" is a palindrome"<<std::endl;
    }

    else{
        std::cout<<num<<" is not a palindrome"<<std::endl;
    }
}