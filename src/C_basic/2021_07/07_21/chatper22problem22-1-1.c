#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    char reg_num[20];
    int loan_info;
};

int main(void)
{
    struct employee man1;
    
    puts("종업원 이름을 입력: ");
    scanf("%s", man1.name);
    puts("주민등록번호를 입력: ");
    scanf("%s", man1.reg_num);
    puts("급여정보를 입력: ");
    scanf("%d", &man1.loan_info);
    
    printf("종업원 이름: %s \n주민등록번호: %s\n급여정보: 시급 %d원\n", man1.name, man1.reg_num, man1.loan_info);
    return 0;
}