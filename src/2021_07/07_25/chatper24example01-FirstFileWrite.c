#include <stdio.h>

int main(void)
{
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_07/07_25/data.txt", "wt");
    if(fp==NULL) {
        puts("파일오픈 실패!");
        return -1;    // 비정상적 종료를 의미하기 위해서 -1을 반환
    }
    
    fputc('A', fp);
    fputc('B', fp);
    fputc('C', fp);
    fclose(fp);    // 스트림의 종료
    return 0;
}