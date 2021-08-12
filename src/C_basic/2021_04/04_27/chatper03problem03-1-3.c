#include <stdio.h>

int main(void)
{
    int num;
    
    printf("제곱할 정수 입력: ");
    scanf("%d", &num);
    
    printf("%d의 제곱은 %d입니다.\n", num, num*num);
    return 0;
}