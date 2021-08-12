#include <stdio.h>

int ExaminePrimeNum(int);

int main(void)
{
    int num_of_num=1;
    
    for(int i=2; num_of_num<=10; i++)
    {
        int result;
        result = ExaminePrimeNum(i);
        if(result==0)
            continue;
        else
            printf("%d번째 소수는 %d입니다.\n", num_of_num, result);
            num_of_num++;
    }
    return 0;
}

int ExaminePrimeNum(int n)
{
    int elements = 0;
    int output;
    
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
            elements++;
        else
            continue;
    }
    output = elements==2 ? n : 0;
    return output;
}