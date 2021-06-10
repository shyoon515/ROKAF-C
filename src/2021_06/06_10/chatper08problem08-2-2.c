#include <stdio.h>

int main(void)
{
    int a=0, z=0;
    
    for(a=0; a<10; a++)
    {
        for(z=0; z<10; z++)
        {
            if(a*10+z+z*10+a==99)
                printf("A = %d, Z = %d\n", a, z);
        }
    }
    return 0;
}