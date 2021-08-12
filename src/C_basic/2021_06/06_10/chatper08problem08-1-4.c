#include <stdio.h>

int main(void)
{
    int num1=0, num2=0, result=0;
    
    printf("차를 구할 두 정수를 입력: ");
    scanf("%d %d", &num1, &num2);
    
    result = num1<num2 ? num2-num1 : num1-num2;
    printf("두 수의 차: %d \n", result);
    return 0;
}