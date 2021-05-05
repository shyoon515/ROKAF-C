#include <stdio.h>

int main(void)
{
    int sum=0, input=1;
    
    while(input!=0)
    {
        printf("더할 정수를 입력: ");
        scanf("%d", &input);
        sum += input;
    }
    
    printf("현재까지의 총합: %d \n", sum);
    return 0;
}