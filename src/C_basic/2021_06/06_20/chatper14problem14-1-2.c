#include <stdio.h>

void Swap(int *ptr1, int *ptr2, int *ptr3)
{
    int temp1, temp2=0;
    temp1 = *ptr1;
    temp2 = *ptr2;
    *ptr1 = *ptr3;
    *ptr2 = temp1;
    *ptr3 = temp2;
}

int main(void)
{
    int num1, num2, num3;
    
    printf("세 정수를 차례대로 입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("입력한 세 정수: %d, %d, %d \n", num1, num2, num3);
    Swap(&num1, &num2, &num3);
    printf("바뀐 세 정수: %d, %d, %d \n", num1, num2, num3);
    return 0;
}