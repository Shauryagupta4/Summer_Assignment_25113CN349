#include <iostream>
int main()
{
    int num;
    std::cout<<"Enter the number of rows";
    std::cin>>num;
    for (int i=1;i<=num;i++)
    {
        for (int j=1;j<=i;j++)
        {
            std::cout<<j;
        }
        std::cout<<std::endl;
    }
    return 0;
}

/*
Output for num=5
1
12
123
1234
12345
*/