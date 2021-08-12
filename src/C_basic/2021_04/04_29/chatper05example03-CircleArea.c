#include <stdio.h>

int main(void)
{
    double rad;
    double area;
    printf("원의 반지름 입력: ");
    scanf("%lf", &rad);    //double형 데이터를 출력할 때 %f를 사용하는 것과 달리, 입력받을 때는 %lf를 사용한다.
    
    area = rad*rad*3.1415;
    printf("원의 넓이: %f \n", area);
    return 0;
}