#include <iostream>
int fibonacci(int num);

int main()
{
    int num,i=0;
    std::cout<<"Enter a number until which you want the fibonacci series"<<std::endl;
    std::cin>>num;
    std::cout<<"Fibonacci series:"<<std::endl;
    while (fibonacci(i)<=num)
    {
        std::cout<<fibonacci(i)<<" ";
        i++;
    }
    return 0;
}

int fibonacci(int num)
{
    if (num<=0)
    {
        return 0;
    }
    if (num==1)
    {
        return 1;
    }
    return fibonacci(num-1)+fibonacci(num-2);
}
