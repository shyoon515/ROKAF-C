#include <stdio.h>

int main(void)
{
    int dan=0, num=0;
    
    for(dan=1; dan<10; dan++)
    {
        if(dan%2!=0)
            continue;
        for(num=1; num<10; num++)
        {
            if(num>dan)
                break;
            printf("%d x %d = %d \n", dan, num, dan*num);
        }

    }
    return 0;
}