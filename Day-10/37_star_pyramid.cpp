#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of rows";
    std::cin>>num;
    int space=num-1;
    for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=space;j++)
        {
            std::cout<<" ";
        }
        for (int k=1;k<=2*i-1;k++)
        {
            std::cout<<"*";
        }
        std::cout<<std::endl;
        space--;
    }
    return 0;
}

/*
output for n=5
    *
   ***
  *****
 *******
*********
*/
