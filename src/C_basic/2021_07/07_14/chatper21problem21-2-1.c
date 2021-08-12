#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100]={0};
    int sum;
    
    printf("숫자를 포함한 문자열 입력: ");
    fgets(str, sizeof(str), stdin);
    
    for(int i=0; str[i]!=0; i++)
    {
        if((str[i]>='0')&&(str[i]<='9'))
            sum += (str[i]-'0');
    }
    printf("합계: %d\n", sum);
    return 0;
}