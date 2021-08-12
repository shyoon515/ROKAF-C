#include <stdio.h>

int main(void)
{
    char ch;
    
    printf("문자 입력: ");
    scanf("%c", &ch);
    printf("입력한 문자에 대응하는 아스키코드는 %d입니다.\n", ch);
    return 0;
}