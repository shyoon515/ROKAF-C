#include <stdio.h>

int BiggestNumber(int, int, int);
int SmallestNumber(int, int, int);

int main(void)
{
    int num1, num2, num3;
    
    printf("세 개의 정수를 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("가장 큰 정수는 %d이고, 가장 작은 정수는 %d입니다.\n",
           BiggestNumber(num1, num2, num3), SmallestNumber(num1, num2, num3));
    return 0;
}

int BiggestNumber(int num1, int num2, int num3)
{
    if(num1>num2)
        if(num1>num3)
            return num1;
        else
            return num3;
    else
        if(num2>num3)
            return num2;
        else
            return num3;
}

int SmallestNumber(int num1, int num2, int num3)
{
    if(num1<num2)
        if(num1<num3)
            return num1;
        else
            return num3;
    else
        if(num2<num3)
            return num2;
        else
            return num3;
}

//모범답안은 삼항 연산자를 활용하였다. 배우기!