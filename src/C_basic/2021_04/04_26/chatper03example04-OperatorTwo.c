#include <stdio.h>

int main(void)
{
    int num1=2, num2=4, num3=6;
    num1 += 3;    //num1은 5가 됨
    num2 *= 4;    //num2는 16이 됨
    num3 %= 5;    //num3은 1이 됨
    printf("Result: %d, %d, %d \n", num1, num2, num3);
    return 0;
}