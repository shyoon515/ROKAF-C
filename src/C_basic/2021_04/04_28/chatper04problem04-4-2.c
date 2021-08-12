#include <stdio.h>

int main(void)
{
    int num = 3;
    int num2 = num<<3;
    int num3 = num2>>2;    // 오답(?) 피드백: 그냥 num = num<<3 이런식으로 하는게 더 깔끔하지 않을까?
    printf("계산 결과는 %d입니다. \n", num3);
    return 0;
}