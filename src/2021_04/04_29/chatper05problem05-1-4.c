#include <stdio.h>

int main(void)
{
    int num;
    
    printf("0~127의 정수 입력: ");
    scanf("%d", &num);
    printf("입력한 아스키코드에 대응하는 문자는 %c입니다.\n", num);
    return 0;
}