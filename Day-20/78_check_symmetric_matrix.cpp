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
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            transposed[j][i]=matrix[i][j];
        }
    }
    int check=0;
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            if (matrix[i][j]!=transposed[i][j])
            {
                check=1;
                break;
            }
        }
    }
    if (check==0)
    {
        std::cout<<"It is symmetric matrix"<<std::endl;
    }
    else
    {
        std::cout<<"Not symmetric matrix"<<std::endl;
    }
        std::cout<<std::endl;
    return 0;
}