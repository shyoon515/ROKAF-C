#include <stdio.h>

int main(void)
{
    FILE * fp1=fopen("/workspace/ROKAF-C/src/2021_08/08_07/text.txt", "rt");
    FILE * fp2=fopen("/workspace/ROKAF-C/src/2021_08/08_07/text2.txt", "rt");
    char c1, c2;
    int status1, status2;
    
    //fp1=fopen("/workspace/ROKAF-C/src/2021_08/08_07/text.txt", "rt");
    //fp2=fopen("/workspace/ROKAF-C/src/2021_08/08_07/text2.txt", "rt");
    
    if(fp1==NULL || fp2==NULL) {
        puts("파일 오픈 실패!");
        return -1;
    }
    
    while((status1=feof(fp1))==0 && (status2=feof(fp2))==0)
    {
        c1 = fgetc(fp1);
        c2 = fgetc(fp2);
        
        if(c1!=c2)
        {
            puts("두 개의 파일은 일치하지 않습니다.");
            return 0;
        }
    }
    
    /*if((status1==0 && status2 !=0) || (status1!=0 && status2 ==0))
    {
        puts("두 개의 파일은 일치하지 않습니다.");
        puts("여기");
        return 0;
    }*/
    
    puts("두 개의 파일은 완전히 일치합니다.");
    return 0;
}