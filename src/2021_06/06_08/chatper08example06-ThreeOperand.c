#include <stdio.h>

int main(void)
{
    int num, abs;
    printf("정수 입력: ");
    scanf("%d", &num);
    
    abs = num>0 ? num : num*(-1);
    printf("절댓값: %d \n", abs);
    return 0;
}
/*
삼항연산자!! 코드를 간결히 하기에 매우 유용하다.
*/