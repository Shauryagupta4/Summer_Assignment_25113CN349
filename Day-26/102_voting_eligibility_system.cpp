#include <iostream>
int main()
{
    char ch;
    std::cout<<"Are you indian? Y/N"<<std::endl;
    std::cin>>ch;
    while (ch!='Y' &&  ch!='N')
    {
    std::cout<<"Enter only Y/N"<<std::endl;
    std::cin>>ch;
    }
    if (ch=='Y' || ch=='y')
    {
        std::cout<<"Enter your age:"<<std::endl;
        int age;
        std::cin>>age;
        if (age>=18)
        {
            std::cout<<"Do You have voter id card? Y/N"<<std::endl;
            char choice;
            std::cin>>choice;
            while (choice!='Y' &&  choice!='N')
            {
                std::cout<<"Enter only Y/N"<<std::endl;
                std::cin>>choice;
            }
            if (choice=='Y' || choice=='y')
            {
                std::cout<<"You are an eligible citizen for voting"<<std::endl;
                return 0;
            }
        }
    }
    std::cout<<"Not eligible for voting"<<std::endl;
    return 0;
}