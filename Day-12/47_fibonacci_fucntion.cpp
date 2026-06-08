#include <iostream>
void fibonacci(int num);
int main()
{
    int num;
    std::cout<<"Enter a number until which you want to get the fibonacci series"<<std::endl;
    std::cin>>num;
     while (num<0)
    {
        std::cout<<"Enter a number greater then 0"<<std::endl;
        std::cin>>num;
    }
    std::cout<<"Fibonacci series is:"<<std::endl;
    fibonacci(num);
    return 0;
}

void fibonacci(int num)
{
    int a=0,b=1,c;
    if (num==0){
        std::cout<<"0";
        return ;
    }
    std::cout<<a<<","<<b;
    for (int i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        i=(c+a)-1; /*to get the fibonacci series until which user entered (ex: user entered 9 so fibonacci until 13 i.e. 0,1,1,2,3,5,8,13)*/
        std::cout<<","<<c;
    }
}