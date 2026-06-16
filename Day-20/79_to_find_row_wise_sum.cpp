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
    for (int i=0;i<m;i++)
    {
        int row_sum=0;
        for (int j=0;j<n;j++)
        {
           row_sum+=matrix[i][j];
        }
        std::cout<<"The sum of row "<<i+1<<" is : "<<row_sum<<std::endl;
    }
    return 0;
}