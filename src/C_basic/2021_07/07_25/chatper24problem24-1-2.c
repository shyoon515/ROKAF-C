#include <stdio.h>

#include <stdio.h>

int main(void)
{
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_07/07_25/mystory.txt", "a");
    
    if(fp==NULL) {
        printf("파일 오픈 실패");
        return -1;
    }
    
    fputs("#즐겨먹는 음식: 짜장면, 탕수육 \n", fp);
    fputs("#취미: 축구 \n", fp);
    
    fclose(fp);
    return 0;
}