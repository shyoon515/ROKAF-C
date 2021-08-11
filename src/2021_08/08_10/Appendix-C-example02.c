#include <stdio.h>
#include <stdarg.h>
int Sum(int n, ...);

int main(void)
{
    printf("1+2=%d \n", Sum(2, 1, 2));
    printf("1+2+3=%d \n", Sum(3, 1, 2, 3));
    printf("1+2+3+4=%d \n", Sum(4, 1, 2, 3, 4));
    return 0;
}

int Sum(int n, ...)
{
    int sum=0;
    int i;
    va_list vlist;    // 단계1: 가변인자의 참조자 선언
    
    va_start(vlist, n);    // 단계2: 참조 대상과 범위 지정
    for(i=0; i<n; i++)
        sum+=va_arg(vlist, int);    // 단계3: 값의 추출
    
    va_end(vlist);    // 단계4: 해 제
    return sum;
}