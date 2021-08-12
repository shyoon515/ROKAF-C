#include <stdio.h>

long FileByte(FILE * fp)
{
    long fsize;
    long fpos;
    fpos=ftell(fp);
    
    fseek(fp, 0, SEEK_END);
    fsize=ftell(fp);
    fseek(fp, fpos, SEEK_SET);
    return fsize;
}

int main(void)
{
    long bytes;
    /* 파일읽기 */
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_07/07_27/text1.txt", "rt");
    
    bytes = FileByte(fp);
    fseek(fp, bytes, SEEK_END);
    fclose(fp);
    printf("파일의 크기: %ld바이트\n", bytes);
    return 0;
}