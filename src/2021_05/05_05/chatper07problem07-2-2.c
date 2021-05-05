#include <stdio.h>

int main(void)
{
    int num_of_o=0, loop=0;
    
    while(num_of_o<5)
    {
        while(loop<num_of_o)
        {
            printf("%s", "o ");
            loop++;
        }
        loop=0;
        printf("%s", "*\n");
        num_of_o++;
    }
    return 0;
}