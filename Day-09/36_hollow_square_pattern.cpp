#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the length of a square(1 unit=*)";
    std::cin>>num;
    while (num<=0)
    {
        std::cout<<"Length can't be negative or 0. Please re enter:"<<std::endl;
        std::cin>>num;
    }
    if (num==1)
    {
        std::cout<<"*"<<std::endl;
        return 0;
    }

    //top row
    for (int i=1;i<=num;i++)
    {
        std::cout<<"*";
    }
    std::cout<<std::endl;

    //hollow middle row
    for (int j=1;j<=num-2;j++)
    {
        std::cout<<"*";
        for (int k=1;k<=num-2;k++)
        {
            std::cout<<" ";
        }
        std::cout<<"*"<<std::endl;
    }
    
    //bottom row
    for (int i=1;i<=num;i++)
    {
        std::cout<<"*";
    }
    std::cout<<std::endl;

    return 0;
}

/*
output for num=5
*****
*   *
*   *
*   *
*****
*/