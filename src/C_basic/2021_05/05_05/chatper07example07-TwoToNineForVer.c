#include <stdio.h>

int main(void)
{
    int cur, is;
    
    for(cur=2; cur<10; cur++)
    {
        printf("\n<<%d단>>\n", cur);
        for(is=1; is<10; is++)
        {
            printf("%dx%d=%d\n", cur, is, cur*is);
        }
    }
    return 0;
}