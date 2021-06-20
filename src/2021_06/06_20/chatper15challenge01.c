#include <stdio.h>

void GetOdds(int * arr)
{
    int temp[10];
    int n=0;
    
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2==0)
            continue;
        else
            temp[n++]= arr[i];
    }
    
    printf("홀수 출력: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");
}

void GetEvens(int * arr)
{
    int temp[10];
    int n=0;
    
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2!=0)
            continue;
        else
            temp[n++]= arr[i];
    }
    
    printf("짝수 출력: ");
    for(int i=0; i<n; i++)
    {
        printf("%d ", temp[i]);
    }
    printf("\n");
}


int main(void)
{
    int arr[10];
    
    printf("총 10개의 숫자 입력\n");
    for(int i=0; i<10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    
    GetOdds(arr);
    GetEvens(arr);
    return 0;
}