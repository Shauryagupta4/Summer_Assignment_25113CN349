#include <stdio.h>
int main()
{
    long long num,num1;
    int sum=0;
    printf("Enter a number");
    scanf("%lld", &num);
    num1=num;
    while (num1>0)
    {
        int a=num1%10;
        sum+=a;
        num1/=10;
    }
    printf("The sum of the digits of the  %lld is %d", num,sum);
    return 0;
}