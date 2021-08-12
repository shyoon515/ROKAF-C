#include <stdio.h>

void NnDan(int, int);

int main(void)
{
    int num1, num2;
    
    printf("두 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1<=0||num2<=0||num1>9||num2>9)
        printf("잘못 입력하셨습니다.\n");
    else
        num1>num2 ? NnDan(num2, num1) : NnDan(num1, num2);
    return 0;
}

void NnDan(int num1, int num2)
{
    int i;
    
    for(; num1<=num2; num1++)
    {
        printf("\n-----<%d단>-----\n", num1);
        for(i=1; i<=9 ; i++)
        {
            printf("%d x %d = %d\n", num1, i, num1*i);
        }
    }
    return;
}