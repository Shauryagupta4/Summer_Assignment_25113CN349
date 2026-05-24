#include <stdio.h>
int main()
{
    int n, sum=0;
    printf("enter a number upto which you want sum of N natural numbers:");
    scanf("%d",&n);

    while (n>0)
    {
        sum=sum+n;
        n--;
    }
    printf("sum of first N natural number is: %d", sum);
    return 0;
}