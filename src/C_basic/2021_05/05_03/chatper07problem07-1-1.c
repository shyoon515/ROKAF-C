#include <stdio.h>

int main(void)
{
    int num;
    printf("How many times to repeat?: ");
    scanf("%d", &num);
    
    while(num>0)
    {
        printf("Hello world! \n");
        num--;
    }
    return 0;
}