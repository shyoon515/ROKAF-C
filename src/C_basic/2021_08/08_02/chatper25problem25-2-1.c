#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * GetString(int mem)
{
    char * string = (char *)malloc(sizeof(char)*mem);
    printf("영문 문자열을 입력: ");
    gets(string);
    return string;
}

void ReverseString(char * str, char * rev_str, int mem)
{
    int idx_length, prv_idx;
    
    prv_idx = 0;
    idx_length = strlen(str)-1;
    rev_str[idx_length+1] = 0;
    for(int i=0; i<idx_length+2; i++)
    {
        if(str[i]==' ' || i==idx_length+1)
        {
            rev_str[idx_length-i] = ' ';
            for(int j=prv_idx; (str[j] != ' ')&&(str[j] != 0); j++)
            {
                rev_str[idx_length-i+1+j-prv_idx] = str[j];
            }
            prv_idx = i+1;
        }
    }
    return;
}

int main(void)
{
    int mem;
    char * str;
    char * rev_str;
    
    printf("문자열의 최대 길이 정보를 입력: ");
    scanf("%d", &mem);
    getchar();    // \n 삭제.
    str = GetString(mem);
    ReverseString(str, rev_str, mem);
    puts(rev_str);
    
    free(str);
    return 0;
}