#include <stdio.h>

int main(void)
{
    int arr2d[3][3];
    printf("%d \n", arr2d);
    printf("%d \n", arr2d[0]);
    printf("%d \n\n", &arr2d[0][0]);
    
    printf("%d \n", arr2d[1]);
    printf("%d \n\n", &arr2d[1][0]);
    
    printf("%d \n", arr2d[2]);
    printf("%d \n\n", &arr2d[2][0]);
    
    printf("sizeof(arr2d): %ld \n", sizeof(arr2d));
    printf("sizeof(arr2d[0]): %ld \n", sizeof(arr2d[0]));
    printf("sizeof(arr2d[1]): %ld \n", sizeof(arr2d[1]));
    printf("sizeof(arr2d[2]): %ld \n", sizeof(arr2d[2]));
    return 0;
}