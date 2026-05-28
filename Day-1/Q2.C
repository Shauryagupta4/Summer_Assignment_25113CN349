#include <stdio.h>
int main()
{
    int num,res,i=1;
    printf("Enter a number");
    scanf("%d", &num);

    while (i<=10)
    {
        res=num*i;
        printf("\n%dX%d=%d", num,i,res);
        i+=1;
    }
    return 0;
}