#include <stdio.h>

int main(void)
{
    int input, loop=1;
    printf("양의 정수 입력: ");
    scanf("%d", &input);
    
    while(input>0)
    {
        printf("%d ", 3*loop++);
        input--;
    }
    return 0;
}