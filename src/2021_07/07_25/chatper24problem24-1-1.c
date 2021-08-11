#include <stdio.h>

int main(void)
{
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_07/07_25/mystory.txt", "wt");
    
    if(fp==NULL) {
        printf("파일 오픈 실패");
        return -1;
    }
    
    fputs("#이름: 윤승혁\n", fp);
    fputs("#주민번호: 123456-1234567\n", fp);
    fputs("#전화번호: 010-1234-5678\n", fp);
    
    fclose(fp);
    return 0;
}