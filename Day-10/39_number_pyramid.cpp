#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of rows";
    std::cin>>num;
    int space=num-1;
    for (int i=0;i<num;i++)
    {
        for (int j=1;j<=space;j++)
        {
            std::cout<<" ";
        }
        for (int k=0;k<=i;k++)
        {
            std::cout<<k+1;
        }
        for (int m=i;m>=1;m--)
        {
            std::cout<<m;
        }
        std::cout<<std::endl;
        space--;
    }
    return 0;
}

/*
output for num=5
    1
   121
  12321
 1234321
123454321
*/