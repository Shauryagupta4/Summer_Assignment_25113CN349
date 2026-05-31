#include <iostream>
int main()
{
    int num, a=0, b=1, c;
    std::cout<<"Enter a number until which you want to get the fibonacci series";
    std::cin>>num;
    if (num==0){
        std::cout<<"0";
        return 0;
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
    return 0;
}