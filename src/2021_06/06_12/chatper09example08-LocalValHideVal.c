#include <stdio.h>

int main(void)
{
    int num=1;
    
    if(num==1)
    {
        int num=7;
        num+=10;
        printf("if문 내 지역변수 num: %d \n", num);
    }
    printf("main 함수 내 지역변수 num: %d \n", num);
    return 0;
}
//9행을 주석처리하고 실행결과를 확인하여 차이를 살펴보자.