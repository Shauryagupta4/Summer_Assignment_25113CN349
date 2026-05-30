#include <iostream>
using namespace std;
int main()
{
    long long num,num1,product=1;
    cout<<"Enter a number";
    cin>>num;
    num1=num;
    while (num1>0)
    {
        int a=num1%10;
        product*=a;
        num1/=10;
    }
    cout<<"The product of the digits of "<<num<<" is "<<product;
    return 0;
}