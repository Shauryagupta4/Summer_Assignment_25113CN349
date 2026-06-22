#include <iostream>
#include <ctime>
int main()
{
    srand(time(0));
    int user_input,computer_input=(rand()%10)+1,chances=0;
    std::cout<<computer_input<<std::endl;
    while (chances<5)
    {
        std::cout<<"Enter your guess from 1 to 20:"<<std::endl;
        std::cin>>user_input;
        if (user_input==computer_input)
        {
            std::cout<<"You won"<<std::endl;
            return 0;
        }
        chances++;

    }
    std::cout<<"You loss"<<std::endl;
    return 0;
}