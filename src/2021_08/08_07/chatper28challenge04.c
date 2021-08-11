#include <stdio.h>

int main(void)
{
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_08/08_07/text.txt", "rt");
    char str[100];
    int a_word=0, p_word=0;
    
    if(fp==NULL) {
        puts("파일오픈 실패!");
        return -1;
    }
    
    while(feof(fp)==0)
    {
        fscanf(fp, "%s", str);
        if(str[0]=='a' || str[0]=='A')
            a_word++;
        if(str[0]=='p' || str[0]=='P')
            p_word++;
    }

    if(feof(fp)==0)
        puts("파일스캔 실패!");
    
    printf("A로 시작하는 단어의 수: %d\n", a_word);
    printf("P로 시작하는 단어의 수: %d\n", p_word);
    
    fclose(fp);
    return 0;
}