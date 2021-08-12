#include <stdio.h>

int main(void)
{
    char arr[50];
    int i;
    
    printf("영단어 입력: ");
    scanf("%s", arr);
    
    for(i=0; arr[i]!='\0'; i++);    //arr[i] = 0 으로도 가능하다.
    printf("영단어의 길이: %d \n", i);
    return 0;
}