#include <iostream>
int main()
{
    int m,n,matrix[10][10];
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
    for (int i=0;i<n;i++)
    {
        int column_sum=0;
        for (int j=0;j<m;j++)
        {
           column_sum+=matrix[j][i];
        }
        std::cout<<"The sum of column "<<i+1<<" is : "<<column_sum<<std::endl;
    }
    return 0;
}