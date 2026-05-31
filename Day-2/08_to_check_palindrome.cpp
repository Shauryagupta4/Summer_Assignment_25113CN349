#include <iostream>
using namespace std;
int main()
{
    long long num,num1,rev=0;
    cout<<"Enter a number";
    cin>>num;
    num1=num;
    while (num1>0)
    {
        int a=num1%10;
        rev=(rev*10) + a;
        num1/=10;
    }

    if (rev==num)
    {
        cout<<num<<" is a palindrome";
    }
    else 
    {
        cout<<num<<" is not a palindrome";
    }
    return 0;
}