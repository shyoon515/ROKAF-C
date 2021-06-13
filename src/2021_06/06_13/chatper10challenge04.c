#include <stdio.h>

int Sum(int, int, int);

int main(void)
{
    int money = 3500, crm=1, sug=1, coke=1;
    
    printf("현재 당신이 소유하고 있는 금액: 3500\n");
    for(crm=1; Sum(crm, sug, coke)<=money; crm++)
    {
        for(sug=1; Sum(crm, sug, coke)<=money; sug++)
        {
            for(coke=1; Sum(crm, sug, coke)<=money; coke++)
            {
                if(Sum(crm, sug, coke)==money)
                    printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", crm, sug, coke);
                else
                    continue;
            }
            coke = 1;
        }
        sug = 1;
    }
    return 0;
}

int Sum(int crm, int sug, int coke)
{
    return crm*500+sug*700+coke*400;
}