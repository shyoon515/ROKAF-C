#include <stdio.h>

int main(void)
{
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_07/07_25/mystory.txt", "rt");
    char str[30];

    if(fp==NULL) {
        printf("파일 오픈 실패");
        return -1;
    }
    
    while(fgets(str, sizeof(str), fp)!=NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}