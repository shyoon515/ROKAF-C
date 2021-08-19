#include <iostream>

int main(void)
{
    int paycheck=0;
    
    while(1)
    {
        std::cout<<"판매 금액을 만원 단위로 입력(-1 to end): ";
        std::cin>>paycheck;
        
        if(paycheck==-1)
            break;
        
        paycheck = 50+paycheck*0.12;
        std::cout<<"이번 달 급여: "<<paycheck<<"만원 \n";
    }
    std::cout<<"프로그램을 종료합니다."<<std::endl;
    return 0;
}