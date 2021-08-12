#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i, num1, num2;
    srand((int)time(NULL));
    num1 = rand()%13%6;
    num2 = rand()%17%6;
    printf("주사위 1의 결과 %d \n", ++num1);
    printf("주사위 2의 결과 %d \n", ++num2);
    return 0;
}