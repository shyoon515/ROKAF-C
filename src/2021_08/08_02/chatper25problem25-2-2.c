#include <stdio.h>
#include <stdlib.h>

void SaveNum(int num, int * nums, int i)
{
    if(num==-1)
    {
        return;
    }
    
    if(i%3==0 && i>=6)
    {
        nums = (int *)realloc(nums, sizeof(int)*(i+2));
    }
    nums[i] = num;
    return;
}

int main(void)
{
    int num=0;
    int * nums = (int *)malloc(sizeof(int)*5);
    int i=0;
    
    while(num != -1)
    {
        printf("정수 입력(-1 입력 시 종료): ");
        scanf("%d", &num);
        SaveNum(num, nums, i++);
        fflush(stdin);
    }
    
    for(int j=0; j<i-1; j++)
        printf("%d ", nums[j]);
    return 0;
}