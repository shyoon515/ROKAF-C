#include <stdio.h>
#define ADD(X, Y, Z)    ((X)+(Y)+(Z))
#define MUL(X, Y, Z)    ((X)*(Y)*(Z))

int main(void)
{
    int a=3, b=4, c=5;
    
    printf("덧셈 결과: %d\n", ADD(a, b, c));
    printf("곱셈 결과: %d\n", MUL(a, b, c));
    return 0;
}