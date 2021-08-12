#include <stdio.h>

int main(void)
{
    int num1=0, num2=0, sum=0;
    
    printf("두 정수 입력(큰 숫자 먼저): ");
    scanf("%d %d", &num1, &num2);
    
    for(; num1<=num2; num1++)
        sum+=num1;
    
    printf("구하는 합: %d\n", sum);
    return 0;
}