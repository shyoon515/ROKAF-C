#include <stdio.h>

int main(void)
{
    int num1, num2;    //변수 두 개 선언만
    int num3=30, num4=40;    //변수 두 개 선언 및 초기화
    
    printf("num1: %d, num2: %d \n", num1, num2);    //둘 다 아무 의미 없는 값이 출력된다. 즉, 쓰레기 값.
    num1=10;
    num2=20;    // 두 변수 모두 초기화
    
    printf("num1: %d, num2: %d \n", num1, num2);    // 10, 20 프린트 됨.
    printf("num3: %d, num4: %d \n", num3, num4);    // 30, 40 프린트 됨.
    return 0;
}