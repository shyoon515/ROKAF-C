#include <stdio.h>

int main(void)
{
    int num, result;
    printf("정수 입력: ");
    scanf("%d", &num);
    
    result = (~num) + 1;
    printf("부호가 반전된 정수는 %d입니다.", result);
    return 0;
}