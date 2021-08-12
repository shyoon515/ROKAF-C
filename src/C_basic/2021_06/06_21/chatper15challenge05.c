#include <stdio.h>

void DesSort(int arr[])
{
    int i, j;
    int temp;
    
    for(i=0; i<6; i++)
    {
        for(j=0; j<(7-i)-1; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[7];
    
    printf("7개의 정수 입력\n");
    for(int i=0; i<7; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    DesSort(arr);
    
    for(int i=0; i<7; i++)
        printf("%d ", arr[i]);
    return 0;
}