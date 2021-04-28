#include <stdio.h>

int main(void)
{
    int num = 15;    // 00000000 00000000 00000000 00001111
    
    int result1 = num<<1;    // 00000000 00000000 00000000 00011110
    int result2 = num<<2;
    int result3 = num<<3;
    
    printf("1칸 이동 결과: %d \n", result1);
    printf("2칸 이동 결과: %d \n", result2);
    printf("3칸 이동 결과: %d \n", result3);
    return 0;
}