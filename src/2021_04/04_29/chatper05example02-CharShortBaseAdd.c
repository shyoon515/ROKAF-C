#include <stdio.h>

int main(void)
{
    char num1=1, num2=2, result1=0;
    short num3=300, num4=400, result2=0;
    
    printf("size of num1 & num2: %ld, %ld \n", sizeof(num1), sizeof(num2));
    printf("size of num3 & num4: %ld, %ld \n", sizeof(num3), sizeof(num4));
    
    printf("size of char add: %ld \n", sizeof(num1+num2));
    printf("size of short add: %ld \n", sizeof(num3+num4));
    
    result1=num1+num2;
    result2=num3+num4;
    printf("size of result1 & result2: %ld, %ld \n", sizeof(result1), sizeof(result2));
    return 0;
}
// %d를 사용하면 오류가 발생함에 따라, %ld를 활용해준다. ld는 long이 추가된 것을 의미한다.