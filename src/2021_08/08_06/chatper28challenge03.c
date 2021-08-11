#include <stdio.h>

typedef struct complex
{
    double real;
    double img;
} Complex;

void GetComplexNum(Complex * comp)
{
    printf("복소수 입력[실수 허수]: ");
    scanf("%lf %lf", &(*comp).real, &(*comp).img);
}

void PrintComplexSum(Complex comp1, Complex comp2)
{
    printf("합의 결과] 실수: %f, 허수: %f\n", comp1.real+comp2.real, comp1.img+comp2.img);
}

void PrintComplexMul(Complex comp1, Complex comp2)
{
    printf("곱의 결과] 실수: %f, 허수: %f\n", comp1.real*comp2.real-comp1.img*comp2.img, comp1.img*comp2.real+comp1.real*comp2.img);
}

int main(void)
{
    Complex comp1, comp2;
    
    GetComplexNum(&comp1);
    GetComplexNum(&comp2);
    PrintComplexSum(comp1, comp2);
    PrintComplexMul(comp1, comp2);
    return 0;
}