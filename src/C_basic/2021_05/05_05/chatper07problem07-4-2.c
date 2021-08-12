#include <stdio.h>

int main(void)
{
    int input=0, result=1;
    
    printf("계승을 구할 정수 입력: ");
    scanf("%d", &input);
    
    for(int i=1; i<=input; i++)
        result = result*i;
    printf("결과: %d \n", result);
    return 0;
}