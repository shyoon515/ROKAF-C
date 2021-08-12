#include <stdio.h>

int main(void)
{
    double d1=1.23e-3;
    double d2=1.23e-4;
    double d3=1.23e-5;
    double d4=1.23e-6;
    
    printf("%g \n", d1);
    printf("%g \n", d2);
    printf("%g \n", d3);
    printf("%g \n", d4);    //%g는 소수점 이하 자릿수가 늘어나면 e표기법으로 출력을 한다.
    return 0;
}