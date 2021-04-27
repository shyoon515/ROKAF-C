#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    int result;
    
    printf("세 개의 정수 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    result = (num1-num2)*(num2+num3)*(num3%num1);
    
    printf("(%d-%d)x(%d+%d)x(%d나누기%d의 나머지)=%d\n", num1, num2, num2, num3, num3, num1, result);
    return 0;
}