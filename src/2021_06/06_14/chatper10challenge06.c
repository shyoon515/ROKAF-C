#include <stdio.h>

int main(void)
{
    int input=0, hour=0, min=0, sec=0;
    
    printf("초(second)입력: ");
    scanf("%d", &input);
    hour = input/3600;
    min = (input-hour*3600)/60;
    sec = input-(hour*3600+min*60);
    
    printf("[h:%d, m:%d, s:%d]\n", hour, min, sec);
    return 0;
}