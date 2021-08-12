#include <stdio.h>

int main(void)
{
    int num1=10;
    int num2=(num1--)+2;    // 괄호 안에 저렇게 넣어주는게 가능함을 인지하자. 즉, C에서는 소괄호도 연산자이다. num2는 12가 저장되고, num1은 이로 인해 9가 되어 있다.
    
    printf("num1: %d \n", num1);
    printf("num2: %d \n", num2);
    return 0;    
}