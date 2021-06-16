#include <stdio.h>

int main(void)
{
    char arr[50];
    int max;
    
    printf("영단어 입력: ");
    scanf("%s", arr);
    
    max = arr[0];
    for(int i=0; arr[i]!=0; i++)
    {
        max = max>arr[i] ? max : arr[i];
    }
    printf("아스키 코드가 가장 큰 문자: %c\n", max);    
    return 0;
}