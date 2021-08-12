#include <stdio.h>

int main(void)
{
    int sum=0, loop=0;
    
    while(loop<=100)
    {
        while(loop%2 == 0)
        {
            sum+=loop;
            loop++;
        }
        loop++;
    }
    printf("합의 결과: %d \n", sum);
    return 0;
}