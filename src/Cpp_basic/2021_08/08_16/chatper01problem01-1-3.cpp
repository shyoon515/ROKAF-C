#include <iostream>

int main(void)
{
    int dan;
    
    std::cout<<"단을 입력: ";
    std::cin>>dan;
    
    for(int i=1; i<10; i++)
    {
        std::cout<<dan<<" x "<<i<<" = "<<dan*i<<std::endl;
    }
    return 0;
}