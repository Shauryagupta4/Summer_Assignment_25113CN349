#include <stdio.h>
int main()
{
    long long num,num1,rev=0;
    printf("Enter a number");
    scanf("%lld", &num);
    num1=num;
    while (num1>0)
    {
        int a=num1%10;
        rev=(rev*10) + a;
        num1/=10;
    }

    if (rev==num)
    {
        printf("%lld is a palindrome", num);
    }
    else 
    {
        printf("%d is not a palindrome", num);
    }
    return 0;
}