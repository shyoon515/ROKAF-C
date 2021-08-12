#include <stdio.h>
#define PI 3.141592
#define AREA(RADIUS)    ((RADIUS)*(RADIUS)*PI)

int main(void)
{
    int rad = 5;
    
    printf("원의 넓이: %f\n", AREA(rad));
    return 0;
}