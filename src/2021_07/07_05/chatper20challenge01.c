#include <stdio.h>

void PrintArr(int (*arr)[4])
{
    int i,j;
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

void NinetyDegree(int (*arr)[4])
{
    int arr2[4][4]={0};
    int i,j;
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            arr2[j][3-i] = arr[i][j];
    }
    
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
            arr[i][j] = arr2[i][j];
    }
}

int main(void)
{
    int arr[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    PrintArr(arr);
    NinetyDegree(arr);
    PrintArr(arr);
    NinetyDegree(arr);
    PrintArr(arr);
    NinetyDegree(arr);
    PrintArr(arr);
    NinetyDegree(arr);
    PrintArr(arr);
    return 0;
}