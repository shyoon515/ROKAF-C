#include <stdio.h>

int main(void)
{
    double x1, x2, y1, y2;
    double x_gap, y_gap;
    
    printf("좌 하단의 x, y좌표: ");
    scanf("%lf %lf", &x1, &y1);
    printf("우 상단의 x, y좌표: ");
    scanf("%lf %lf", &x2, &y2);
    printf("두 점이 이루는 직사각형의 넓이는 %f입니다.\n", (x2-x1)*(y2-y1));
    return 0;
}