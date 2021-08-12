#include <stdio.h>

int main(void)
{
    printf("literal int size: %ld \n", sizeof(7));
    printf("literal double size: %ld \n", sizeof(7.14));
    printf("literal char size: %ld \n", sizeof('A'));
    return 0;
}