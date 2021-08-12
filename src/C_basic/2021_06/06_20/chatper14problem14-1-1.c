#include <stdio.h>

int SquareByValue(int n)
{
    return n*n;
}

void SquareByReference(int * ptr)
{
    *ptr *= *ptr;
}

int main(void)
{
    int n, first;
    
    printf("제곱할 정수를 입력: ");
    scanf("%d", &n);
    first=n;
    
    printf("<SquareByValue 함수의 결괏값>\n%d의 제곱은 %d\n\n", n, SquareByValue(n));
    SquareByReference(&n);
    printf("<SquareByReference 함수의 결괏값>\n%d의 제곱은 %d\n", first, n);
    return 0;
}