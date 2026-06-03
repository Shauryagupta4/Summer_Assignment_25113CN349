#include <iostream>
using namespace std;
int main()
{
    long long num,num1;
    int sum=0;
    cout<<"Enter a number";
    cin>>num; 
    num1=num;
    while (num1>0)
    {
        int a=num1%10;
        sum+=a;
        num1/=10;
    }
    cout<<"The sum of the digits of the "<<num<<" is "<<sum;
    return 0;
}