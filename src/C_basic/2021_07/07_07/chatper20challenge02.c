#include <stdio.h>

int position[3]={0,0,1};

void FillNumRow(int (*arr)[1000], int num, int rindex, int cindex, int direction)
{   
    if(direction == 1)
    {
        while(arr[rindex][cindex] == -1)
            arr[rindex][cindex++] = num++;
        cindex--;
        position[0] = ++rindex;
        position[1] = cindex;
        position[2] = num;
    }
    else if(direction == -1)
    {
        while((arr[rindex][cindex] == -1)&&(cindex >= 0))
            arr[rindex][cindex--] = num++;
        cindex++;
        position[0] = --rindex;
        position[1] = cindex;
        position[2] = num;
    }
}

void FillNumCol(int (*arr)[1000], int num, int rindex, int cindex, int direction)
{
    if(direction == 1)
    {
        while((arr[rindex][cindex] == -1)&&(rindex >= 0))
            arr[rindex--][cindex] = num++;
        rindex++;
        position[0] = rindex;
        position[1] = ++cindex;
        position[2] = num;
    }
    else if(direction == -1)
    {
       while((arr[rindex][cindex] == -1))
            arr[rindex++][cindex] = num++;
        rindex--;
        position[0] = rindex;
        position[1] = --cindex;
        position[2] = num;
    }
}

void SnailArr(int (*arr)[1000], int n)
{
    while(position[2]<=n*n)
    {
        FillNumRow(arr, position[2], position[0], position[1], 1);
        FillNumCol(arr, position[2], position[0], position[1], -1);
        FillNumRow(arr, position[2], position[0], position[1], -1);
        FillNumCol(arr, position[2], position[0], position[1], 1);
    }
}

int main(void)
{
    int n;
    int i, j;
    int arr[1000][1000]={0};
    
    printf("숫자를 입력하시오: ");
    scanf("%d", &n);
    
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            arr[i][j] = -1;
    }
    
    SnailArr(arr, n);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            printf("%3d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}