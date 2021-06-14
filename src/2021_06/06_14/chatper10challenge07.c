#include <stdio.h>

int GetK(int n)
{
    int k=-1, pow=1;
    
    while(pow<=n)
    {
        k++;
        pow *= 2;
    } 
    return k;
}

int main(void)
{
    int input;
    
    printf("상수 n 입력: ");
    scanf("%d", &input);
    printf("공식을 만족하는 k의 최댓값은 %d\n", GetK(input));
}