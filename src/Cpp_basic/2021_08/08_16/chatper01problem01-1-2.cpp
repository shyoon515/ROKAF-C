#include <iostream>

int main(void)
{
    char name[100];
    char phoneNum[100];
    
    std::cout<<"이름을 입력: ";
    std::cin>>name;
    std::cout<<"전화번호를 입력: ";
    std::cin>>phoneNum;
    
    std::cout<<"제 이름은 "<<name<<"입니다. \n";
    std::cout<<"제 전화번호는 "<<phoneNum<<"입니다."<<std::endl;
    return 0;
}