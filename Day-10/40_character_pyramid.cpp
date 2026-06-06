#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of rows";
    std::cin>>num;
    int space=num-1;
    for (int i='A'-1;i<'A'+num-1;i++)
    {
        for (int j=1;j<=space;j++)
        {
            std::cout<<" ";
        }
        for (int k='A'-1;k<=i;k++)
        {
            std::cout<<char(k+1);
        }
        for (int m=i;m>='A';m--)
        {
            std::cout<<char(m);
        }
        std::cout<<std::endl;
        space--;
    }
    return 0;
}

/*
output for num=5
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/