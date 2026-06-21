#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
int main()
{
    int n;
    std::cout<<"Enter array size"<<std::endl;
    std::cin>>n;
    std::vector<std::string> names(n);
    std::cout<<"Enter array elements"<<std::endl;
    for (int i=0;i<n;i++)
    {
        std::cin>>names[i];
    }
    sort(names.begin(), names.end() , [](std::string a , std::string b) {return a.length()<b.length();});
    for (std::string name:names)
        std::cout<<name<<std::endl;
    return 0;
}