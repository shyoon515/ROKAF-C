#include <stdio.h>

int main(void)
{
    int korean=0, english=0, math=0;
    double average=0;
    
    printf("국어, 영어, 수학 성적 차례대로 입력: ");
    scanf("%d %d %d", &korean, &english, &math);
    
    average = ((double)korean + english + math)/3;
    printf("평균 점수: %f \n", average);    //%f가 double을 받을 수 있음을 까먹지 말기!
    
    if(average>=90)
        printf("학점: A\n");
    else if(average>=80)
        printf("학점: B\n");
    else if(average>=70)
        printf("학점: C\n");
    else if(average>=50)
        printf("학점: D\n");
    else
        printf("학점: F\n");
    return 0;
}