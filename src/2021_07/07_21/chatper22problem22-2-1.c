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
    struct employee arr[3];
    
    int i;
    for(i=0; i<3; i++)
    {
        printf("%d번째 종업원의 이름 입력: ", i+1);
        scanf("%s", arr[i].name);
        printf("%d번째 종업원의 주민등록번호 입력: ", i+1);
        scanf("%s", arr[i].reg_num);
        printf("%d번째 종업원의 시급 입력: ", i+1);
        scanf("%d", &arr[i].loan_info);
    }
    
    for(i=0; i<3; i++)
    {
        printf("%d번째 종업원의 이름: ", i+1);
        puts(arr[i].name);
        printf("%d번째 종업원의 주민등록번호: ", i+1);
        puts(arr[i].reg_num);
        printf("%d번째 종업원의 시급: ", i+1);
        printf("%d\n", arr[i].loan_info);
    }
    return 0;
}