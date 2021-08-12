#include <stdio.h>

int main(void)
{
    int A[2][4]={1,2,3,4,5,6,7,8};
    int B[4][2];
    int i, j;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<2; j++)
            B[i][j] = A[j][i];
    }
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<2; j++)
            printf("%d ", B[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}