#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of rows";
    std::cin>>num;
    for (int i=0;i<num;i++)
    {
        for (int j=0;j<i;j++)
        {
            std::cout<<" ";
        }
        for (int k=num+4-2*i;k>0;k--)
        {
            std::cout<<"*";
        }
    
        std::cout<<std::endl;
    }
    return 0;
}

/*
output for n=5
*********
  *****
   ***
    *
*/