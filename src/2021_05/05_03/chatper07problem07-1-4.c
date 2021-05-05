#include <stdio.h>

int main(void)
{
    int input=0, loop=9;
    
    printf("출력할 단 입력: ");
    scanf("%d", &input);
    
    while(loop>0)
    {
        printf("%dx%d=%d \n", input, loop, input*loop);
        loop--;
    }
    return 0;
}