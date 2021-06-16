#include <stdio.h>

#include <stdio.h>

int main(void)
{
    char voca[50], back[50];
    int i;
    
    printf("영단어 입력: ");
    scanf("%s", voca);
    
    for(i=0; voca[i]!=0; i++);
    for(int a=0; i>=0; a++)
    {
        i--;
        back[a] = voca[i];
    }
    printf("역순 영단어: %s\n", back);    
    return 0;
}