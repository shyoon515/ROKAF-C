#include <stdio.h>

int main(void)
{
    int num1=0, num2=0;
    
    printf("차를 구할 두 정수를 입력: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1<num2)
        printf("두 수의 차: %d \n", num2-num1);
    else
        printf("두 수의 차: %d \n", num1-num2);
    return 0;
}