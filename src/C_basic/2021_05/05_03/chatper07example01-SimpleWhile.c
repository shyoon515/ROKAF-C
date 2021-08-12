#include <stdio.h>

int main(void)
{
    int num=0;
    
    while(num<5)    //반복의 대상이 하나의 문장이라면 중괄호는 생략 가능. printf("Hello world! %d \n", num++); 으로 한줄로 쓸수도 있다.
    {
        printf("Hello World! %d \n", num);
        num++;
    }
    return 0;
}