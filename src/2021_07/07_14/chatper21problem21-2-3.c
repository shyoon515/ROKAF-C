#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char str1[50];
    char str2[50];
    char str3[5];
    char str4[5];
    int index1, index2, compname;
    
    puts("첫번째 이름과 나이를 입력하세요.");
    fgets(str1, sizeof(str1), stdin);
    puts("두번째 이름과 나이를 입력하세요.");
    fgets(str2, sizeof(str2), stdin);
    
    for(int i=0; str1[i]!=' '; i++)
        index1 = i;
    for(int i=0; str2[i]!=' '; i++)
        index2 = i;
    
    compname = index1 < index2 ? index2 : index1;
    if(!strncmp(str1, str2, compname+1))
        puts("두 사람의 이름은 동일합니다.");
    else
        puts("두 사람의 이름은 동일하지 않습니다.");
    
    for(int i=index1+1; str1[i]!=0; i++)
        str3[i-index1-1] = str1[i];
    for(int i=index2+1; str2[i]!=0; i++)
        str4[i-index2-1] = str2[i];
    
    if(atoi(str3) == atoi(str4))
        puts("두 사람의 나이는 동일합니다.");
    else
        puts("두 사람의 나이는 동일하지 않습니다.");
    
}