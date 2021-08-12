#include <stdio.h>

int main(void)
{
    int num1=3, num2=4;
    double divResult;
    divResult = (double)num1/num2;    //(double)을 없애고 하게 되면, 연산결과의 자료형이 피연산자의 자료형과 일치하므로 0이 먼저 몫으로 나온 후, 이후에 0.0000이 나온다.
    printf("나눗셈 결과: %f \n", divResult);
    return 0;
}    //자동 형 변환이 일어날 때에는 형 변환 연산을 명시해주면 더 좋다. 코드 분석이 용이해지기 때문이다.