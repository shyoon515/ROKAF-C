#include <stdio.h>

int main(void)
{
    int arr[10];
    int odd=0, even=0;
    
    printf("총 10개의 숫자 입력\n");
    for(int i=0; i<10; i++)
    {
        int temp=0;
        printf("입력: ");
        scanf("%d", &temp);
        if(temp%2==0)
        {
            arr[9-even]=temp;
            even++;
        }
        else
        {
            arr[odd]=temp;
            odd++;
        }
    }
    
    printf("배열 요소의 출력: ");
    for(int i=0; i<10; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}