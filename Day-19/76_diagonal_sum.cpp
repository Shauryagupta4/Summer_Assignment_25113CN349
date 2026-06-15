#include <iostream>
int main()
{
    int m,n,matrix[10][10],diagonal_sum=0;
    std::cout<<"Enter matrix row and column size"<<std::endl;
    std::cin>>m>>n;
    while (true)
    {
        if (m!=n)
        {
            std::cout<<"Only Square Matrix allowed"<<std::endl;
            std::cout<<"Enter matrix row and column size again: "<<std::endl;
            std::cin>>m>>n;
        }
        else
        {
            break;
        }
    }
    std::cout<<"Enter matrix elements: "<<std::endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cin>>matrix[i][j];
        }
        std::cout<<std::endl;
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            if (i==j || i==n-1-j)
            {
                diagonal_sum+=matrix[i][j];
            }
        }
    }
    std::cout<<"The diagonal sum(both diagonal) of matrix is : "<<diagonal_sum<<std::endl;
    return 0;
}