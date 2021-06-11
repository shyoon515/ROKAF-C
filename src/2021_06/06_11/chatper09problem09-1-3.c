#include <stdio.h>

void Fibonacci(int);

int main(void)
{
    int num;
    
    printf("피보나치 수열을 구할 숫자의 개수를 입력: ");
    scanf("%d", &num);
    
    if(num<=0)
        printf("입력 오류");
    else
        Fibonacci(num);
    return 0;
}

void Fibonacci(int num)
{
    int current_num = 1, previous_num = 0, next_num = 0;
    printf("0 ");
    
    for(; num>1; num--)
    {
        printf("%d ", current_num);
        next_num = current_num + previous_num;
        previous_num = current_num;
        current_num = next_num;
    }
    printf("\n");
    return;
}