#include <stdio.h>

double CelToFah(double);
double FahToCel(double);

int main(void)
{
    int num;
    double temp, result;
    
    printf("1. 섭씨에서 화씨로 온도 변환 2. 화씨에서 섭씨로 온도 변환");
    scanf("%d", &num);
    
    switch(num)
    {
        case 1:
            printf("섭씨 온도를 입력하세요.");
            scanf("%lf", &temp);
            result = CelToFah(temp);
            break;
        case 2:
            printf("화씨 온도를 입력하세요.");
            scanf("%lf", &temp);
            result = FahToCel(temp);
            break;
    }
    
    printf("변환된 온도는 %f입니다.\n", result);
    return 0;
}

double CelToFah(double temp) 
{
    double result = temp*1.8+32;
    return result;
}

double FahToCel(double temp)
{
    double result = (temp-32)/1.8;
    return result;
}