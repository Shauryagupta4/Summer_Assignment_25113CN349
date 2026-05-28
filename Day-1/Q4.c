#include <stdio.h>
int main()
{
    long long num,num1;
    int digit=0;
    printf("Enter a number");
    scanf("%lld", &num);
    num1=num;
    while (num1>0)
    {
        num1=num1/10;
        digit+=1;
    }
    printf("Number of digits in %lld is %d", num, digit);
    return 0;
}