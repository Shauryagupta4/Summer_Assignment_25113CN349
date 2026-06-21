#include <iostream>
#include <string>
#include <algorithm>
int main()
{
    std::string s,p;
    std::cout<<"Enter a string"<<std::endl;
    std::cin>>s;
    std::cout<<"Enter another string"<<std::endl;
    std::cin>>p;
    std::string printed="";
    for (int i=0;i<s.size();i++)
    {
        for (int j=0;j<p.size();j++)
        {
            if (s[i]==p[j])
            {
                if (printed.find(s[i])== std::string::npos)
                {
                    std::cout<<s[i]<<std::endl;
                    printed+=s[i];
                }
                break;
            }
        }
    }
    return 0;
}