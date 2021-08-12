#include <stdio.h>

int grade[5][5]={{0}};

void GetGrades(void)
{
    int num;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            num=0;
            printf("학생%d의 %d번째 성적 입력: ", i+1, j+1);
            scanf("%d", &num);
            grade[i][j] = num;
        }
    }
    printf("\n");
}

void PersonalTot(void)
{
    for(int i=0; i<4; i++)
        for(int j=0; j<4; j++)
            grade[i][4] += grade[i][j];
}

void SubjectTot(void)
{
    for(int j=0; j<4; j++)
        for(int i=0; i<4; i++)
            grade[4][j] += grade[i][j];
}

int main(void)
{   
    GetGrades();    //학생의 성적 입력
    PersonalTot();    //학생 개인 성적 총점 계산
    SubjectTot();    //과목 성적 총점 계산
    
    for(int i=0; i<4; i++)
        grade[4][4] += grade[4][i];    //전체 총점 계산
    
    for(int i=0; i<5; i++)    //matrix 보여주기
    {
        for(int j=0; j<5; j++)
            printf("%4d ", grade[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;    
}