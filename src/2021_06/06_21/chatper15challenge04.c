#include <stdio.h>

void JudgePal(char * ptr, int length)
{
    char temp;
       
    for(int i=0; i<length/2; i++)
    {
        if(ptr[i]==ptr[length-i])
            continue;
        else
        {
            printf("회문이 아닙니다.\n");
            return;
        }
    }
    printf("회문입니다.\n");
    return;
}

int StrLength(char * ptr)
{
    int i=0;
    
    while(ptr[i]!='\0')
        i++;
    
    return i;
}

int main(void)
{
    char str[100];
    
    printf("문자열 입력: ");
    scanf("%s", str);
    JudgePal(str, StrLength(str)-1);
    return 0;
}