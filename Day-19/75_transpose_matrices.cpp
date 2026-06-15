#include <iostream>
int main()
{
    int m,n,matrix[10][10],transposed[10][10];
    std::cout<<"Enter matrix row and column size"<<std::endl;
    std::cin>>m>>n;
    std::cout<<"Enter matrix elements: "<<std::endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cin>>matrix[i][j];
        }
        std::cout<<std::endl;
    }
    std::cout<<"The transpose of a matrix is: "<<std::endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            transposed[j][i]=matrix[i][j];
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            std::cout<<transposed[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    return 0;
}