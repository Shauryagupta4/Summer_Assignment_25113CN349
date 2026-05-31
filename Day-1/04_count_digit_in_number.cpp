#include <iostream>
using namespace std;
int main()
{
    long long num,num1;
    int digit=0;
    cout<<"Enter a number";
    cin>>num;
    num1=num;
    while (num1>0)
    {
        num1=num1/10;
        digit+=1;
    }
    cout<<"Number of digits in "<<num<<" is "<<digit;
    return 0;
}