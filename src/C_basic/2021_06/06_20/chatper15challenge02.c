#include <stdio.h>

int arr[31];

void GetBinary(int num, int n)
{
    int quotient, leftover;
    
    quotient = num/2;
    leftover = num%2;
    
    if(quotient==0&&leftover==0)
        return;
    else
    {
        arr[30-n] = leftover;
        GetBinary(quotient, n+1);
    }
}

int main(void)
{
    int num, first=0;
    
    printf("10진수 정수 입력: ");
    scanf("%d", &num);
    GetBinary(num, 0);
    first = arr[0];
    for(int i=0; i<31; i++)
    {
        if(first==0)
        {
            first = arr[i+1];
            continue;
        }
        else
            first=1;
            printf("%d", arr[i]);
    }
    printf("\n");
    return 0;
}