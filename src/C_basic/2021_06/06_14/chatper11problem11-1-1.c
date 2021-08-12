#include <stdio.h>

int main(void)
{
    int arr[5], max, min, sum=0, i;
    
    printf("5개의 정수를 입력: ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
    
    for(i=0; i<5; i++)
    {
        if(i==0)
            max = arr[0];
        else
            max = max <= arr[i] ? arr[i] : max;
    }
    
    for(i=0; i<5; i++)
    {
        if(i==0)
            min = arr[0];
        else
            min = min >= arr[i] ? arr[i] : min;
    }
    
    for(i=0; i<5; i++)
    {
        sum += arr[i];
    }
    printf("최댓값: %d, 최솟값: %d, 합계: %d\n", max, min, sum);
    return 0;
}

//iteration을 1번만 하고도 충분히 다 구할 수가 있다...