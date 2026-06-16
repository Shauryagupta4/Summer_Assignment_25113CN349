#include <iostream>
int main()
{
    int m,n,p,q,r,s,first[10][10],second[10][10],result[10][10];
    std::cout<<"Enter first matrix row and column size"<<std::endl;
    std::cin>>m>>n;
    std::cout<<"Enter second matrix row and column size"<<std::endl;
    std::cin>>p>>q;
    if (p!=n)
    {
        std::cout<<"Can not be multiply as column of first matrix should be equal to row of second matrix"<<std::endl;
        return 0;
    }
    std::cout<<"Enter first matrix elements: "<<std::endl;
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cin>>first[i][j];
        }
    }
    std::cout<<"Enter second matrix elements: "<<std::endl;
    for (int i=0;i<p;i++)
    {
        for (int j=0;j<q;j++)
        {
            std::cin>>second[i][j];
        }
    }
    std::cout<<"Multiplication: "<<std::endl;
    
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<q;j++)
        {
            int sum=0;
            for (int k=0;k<p;k++)
            {
                sum+=first[i][k]*second[k][j];
            }
            result[i][j] = sum;
        }
    }
    for (int i=0;i<m;i++)
    {
        for (int j=0;j<n;j++)
        {
            std::cout<<result[i][j]<<std::endl;
        }
    }
    return 0;
}