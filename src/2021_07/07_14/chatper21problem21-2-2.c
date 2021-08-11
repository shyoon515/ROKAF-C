#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str1[20];
    char str2[20];
    char str3[40];
    int len1, len2;
    
    printf("첫번째 문자열 입력: ");
    fgets(str1, sizeof(str1), stdin);
    printf("두번째 문자열 입력: ");
    fgets(str2, sizeof(str2), stdin);
    len1 = strlen(str1);
    len2 = strlen(str2);
    strncpy(str3, str1, sizeof(str3));
    str3[len1-1]=0;
    str2[len2-1]=0;
    strncat(str3, str2, len2);
    puts(str3);
    return 0;
}