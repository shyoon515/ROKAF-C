#include <stdio.h>

int main(void)
{
    int num1=12;
    int num2=12;
    
    printf("num1: %d \n", num1);    // 12가 나옴
    printf("num1++: %d \n", num1++);    //아직은 12가 나옴, 하지만 나온 후엔 13으로 변한 상태.
    printf("num1: %d \n\n", num1);    //이제는 13이 나옴
    
    printf("num2: %d \n", num2);    // 12가 나옴
    printf("++num2: %d \n", ++num2);    // 먼저 13이 되기 때문에, 13이 바로 나옴.
    printf("num2: %d \n", num2);    // 13이 나옴
    return 0;
}