#include <iostream>
using namespace std;
int main()
{
    int num,res,i=1;
    cout<<"Enter a number";
    cin>>num;

    while (i<=10)
    {
        res=num*i;
        cout<<num<<"X"<<i<<"="<<res<<endl;
        i+=1;
    }
    return 0;
}