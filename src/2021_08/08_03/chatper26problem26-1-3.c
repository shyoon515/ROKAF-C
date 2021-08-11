#include <stdio.h>
#define MAX(a, b)    ((a) > (b) ? (a) : (b))

int main(void)
{
    int a=7, b=10;
    
    printf("더 큰 값: %d\n", MAX(a, b));
    return 0;
}