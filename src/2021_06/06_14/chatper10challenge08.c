#include <stdio.h>

int GetPow(int n)
{
    int result;
    
    if(n==0)
        result = 1;
    else
        result = 2*GetPow(n-1);
    return result;
}

int main(void)
{
    int input;
    
    printf("정수 입력: ");
    scanf("%d", &input);
    printf("2의 %d승은 %d\n", input, GetPow(input));
    return 0;
}