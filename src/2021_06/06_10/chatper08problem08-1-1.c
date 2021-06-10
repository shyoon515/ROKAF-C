#include <stdio.h>

/*
int main(void)
{
    int num=1;
    
    while(num<=100)
    {
        if(num%7==0|num%9==0)
            printf("%d    ", num);
        else if(num%7==0)
            printf("%d    ", num);
        else if(num%9==0)
            printf("%d    ", num);
        num++;
    }
    printf("\n");
    return 0;
}
*/

int main(void)
{
    int num;
    
    for(num=1; num<=100; num++)
    {
        if(num%7==0||num%9==0)
            printf("%d    ", num);
    }
    return 0;
}
/*
|와 ||은 다르다!! 파이썬에서의 |과 &는 C에서는 ||와 &&로 써야한다.
*/