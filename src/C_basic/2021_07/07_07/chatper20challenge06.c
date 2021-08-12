#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetAnswer(int *answer)
{
    srand((int)time(NULL));
    answer[0] = rand()%13%10;
    answer[1] = rand()%17%10;
    answer[2] = rand()%19%10;
}

void CheckSBO(int *answer, int *guess, int *SB)
{
    SB[0] = 0, SB[1] = 0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            if(answer[i]==guess[j])
            {
                if(i==j)
                    SB[0]++;
                else
                    SB[1]++;
            }
        }
    }
}

int main(void)
{
    int answer[3]={0};
    int guess[3]={0};
    int SB[2] = {0};
    int status = 1, trial = 0;
    
    while(status == 1)
    {
        GetAnswer(answer);
        status = ((answer[0]==answer[1])||(answer[0]==answer[2])||(answer[1]==answer[2])) ? 1 : 0;
    }
    
    printf("컴퓨터 정답: %d %d %d\n", answer[0], answer[1], answer[2]);
    
    while(SB[0] != 3)
    {
        printf("3개의 숫자 선택: ");
        scanf("%d %d %d", &guess[0], &guess[1], &guess[2]);
        CheckSBO(answer, guess, SB);
        printf("%d번째 도전 결과: %dStrike, %dBall!\n", ++trial, SB[0], SB[1]);
    }
    printf("%d번 만에 맞추셨습니다.\n\nGame Over!\n", trial);
    return 0;
}