#include <stdio.h>

int main(void)
{
    char str[20];
    int ch;
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_07/07_25/simple.txt", "rt");
    if(fp==NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }
    
    ch=fgetc(fp);
    printf("%c \n", ch);
    ch=fgetc(fp);
    printf("%c \n", ch);
    
    fgets(str, sizeof(str), fp);
    printf("%s", str);
    fgets(str, sizeof(str), fp);
    printf("%s", str);
    
    fclose(fp);
    return 0;
}