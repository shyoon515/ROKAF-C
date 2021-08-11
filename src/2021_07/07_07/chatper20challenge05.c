#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetUsrChoice(void)
{
    int choice;
    
    scanf("%d", &choice);
    return choice-1;
}

int Judge(char **arr, int *WinDraw, int com, int usr)
{
    if((com==0&&usr==2)||(com==1&&usr==0)||(com==2&&usr==1))
    {
        WinDraw[0]++;
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 이겼습니다!\n", arr[usr], arr[com]);
        return 1;
    }
    else if(com==usr)
    {
        WinDraw[1]++;
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", arr[usr], arr[com]);
        return 1;
    }
    else
    {
        printf("당신은 %s 선택, 컴퓨터는 %s 선택, 당신이 졌습니다!\n", arr[usr], arr[com]);
        return 0;
    }
}

int main(void)
{
    int status, com, usr;
    char * arr[3] = {"바위", "가위", "보"};
    int WinDraw[2] = {0, 0};
    
    status=1;
    while(status==1)
    {
        srand((int)time(NULL));
        com = rand()%3;
        printf("바위는 1, 가위는 2, 보는 3: ");
        usr = GetUsrChoice();
        
        status = Judge(arr, WinDraw, com, usr);
    }
    
    printf("게임의 결과: %d승, %d무\n", WinDraw[0], WinDraw[1]);
    
    return 0;
}