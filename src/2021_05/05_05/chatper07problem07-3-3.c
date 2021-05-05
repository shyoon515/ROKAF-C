#include <stdio.h>

int main(void)
{
    int front=1, back=1;
    front=2;

    do
    {
        back=1;
        do
        {
            printf("%dx%d=%d \n", front, back, front*back);
            back++;
        }while(back<10);
        front++;
    }while(front<10);
    return 0;
}