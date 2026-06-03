#include <iostream>
int main()
{
    int num, a=0, b=1, c, f[100]={0,1,};
    std::cout<<"Enter a term you want to get in a fibonacci series";
    std::cin>>num;
    for (int i=2;i<=num;i++)
    {
        c=a+b;
        a=b;
        b=c;
        f[i]=c;
    }
    std::cout<<num<<"th term of the fibonacci series is "<<f[num-1];
    return 0;
}