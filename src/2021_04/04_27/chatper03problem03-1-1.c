#include <stdio.h>

int main(void)
{
    int num1, num2;
    int subtract, multiple;
    
    printf("뺄셈과 곱셈 결과를 볼 두 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    
    subtract = num1-num2, multiple = num1*num2;
    
    printf("%d - %d = %d\n", num1, num2, subtract);
    printf("%d x %d = %d\n", num1, num2, multiple);
    return 0;    
}