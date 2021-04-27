#include <stdio.h>

int main(void)
{
    int num1, num2;
    
    printf("두 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    
    printf("%d 나누기 %d의 몫은 %d, 나머지는 %d 입니다.\n", num1, num2, num1/num2, num1%num2);
    return 0;
}