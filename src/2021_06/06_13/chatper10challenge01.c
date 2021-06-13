#include <stdio.h>

int main(void)
{
    int num;
    
    printf("10진수 정수 입력: ");
    scanf("%d", &num);
    
    printf("입력하신 정수의 16진수 표현은 %x \n", num);
    return 0;
}