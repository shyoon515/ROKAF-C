#include <stdio.h>

int main(void)
{
    FILE * src=fopen("/workspace/ROKAF-C/src/2021_07/07_25/simple.txt", "rt");
    FILE * des=fopen("/workspace/ROKAF-C/src/2021_07/07_25/des.txt", "wt");
    char str[20];
    
    if(src==NULL || des==NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }
    
    while(fgets(str, sizeof(str), src)!=NULL)
        fputs(str, des);
    
    if(feof(src)!=0)
        puts("파일복사 완료!");
    else
        puts("파일복사 실패!");
    
    fclose(src);
    fclose(des);
    return 0;
}