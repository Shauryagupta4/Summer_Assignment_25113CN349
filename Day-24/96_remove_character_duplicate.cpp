#include <iostream>
#include <cstring>
int main()
{
    char str[100]="",result[100]="";
    std::cout<<"Enter a string "<<std::endl;
    std::cin>>str;
    int n1=strlen(str), n2=strlen(result);
    for (int i=0;i<n1;i++)
    {
        int check=0;
        for (int j=0;j<n2;j++)
        {
            if (str[i]==result[j])
            {
                check=1;
                break;
            }
            
        }
        if (check==0)
        {
            result[n2]=str[i];
            n2++;
        }
    }
    result[n2] = '\0'; 

    std::cout << "Result: " << result << std::endl;
    return 0;
} 