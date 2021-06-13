#include <stdio.h>

int GetGCD(int, int);

int main(void)
{
    int num1, num2;
    
    printf("두 개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    if(num1<=0||num2<=0)
        printf("잘못 입력하셨습니다.\n");
    else
        printf("두 수의 최대공약수는 %d입니다. \n", GetGCD(num1, num2));
    return 0;
}

int GetGCD(int num1, int num2)
{
    if(num1==1||num2==1)
        return 1;
    else
        for(int i=(num1>num2 ? num2 : num1); i>=1; i--)
        {
            if(num1%i==0 && num2%i==0)
                return i;
            else
                continue;
        }
}