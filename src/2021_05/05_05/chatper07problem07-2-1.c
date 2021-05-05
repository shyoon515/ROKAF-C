#include <stdio.h>

int main(void)
{
    int num_of_num = 0, input=0, sum=0;
    
    while(num_of_num<5)
    {
        printf("합을 구할 숫자 입력: ");
        scanf("%d", &input);
        while(input<1)
        {
            printf("정수는 반드시 1 이상이어야 합니다. 재입력: ");
            scanf("%d", &input);
        }
        sum+=input;
        num_of_num++;
    }
    printf("결과: %d \n", sum);
    return 0;
}