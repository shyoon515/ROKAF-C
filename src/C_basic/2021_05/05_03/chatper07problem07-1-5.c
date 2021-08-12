#include <stdio.h>

int main(void)
{
    int i = 0, num_of_num=0, sum=0, num=0;
    
    printf("How many elements?: ");
    scanf("%d", &num_of_num);
    
    while(i++<num_of_num)
    {
        printf("New element to add: ");
        scanf("%d", &num);
        sum += num;
    }
    
    printf("Everage: %f", (double)sum/num_of_num);    //명시적 형 변환! very good!
    return 0;
}