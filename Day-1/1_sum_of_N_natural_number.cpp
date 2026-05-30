#include <iostream>
using namespace std;
int main()
{
    int n, sum=0;
    cout<<"enter a number upto which you want sum of N natural numbers:"<<endl;
    cin>>n;
    int n1=n;
    while (n1>0)
    {
        sum=sum+n;
        n1--;
    }
    cout<<"sum of first "<<n<<" natural number is: "<<sum;
    return 0;
}