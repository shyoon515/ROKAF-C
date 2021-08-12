#include <stdio.h>

int main(void)
{
    char name[10];
    char sex;
    int age;
    
    FILE * fp=fopen("/workspace/ROKAF-C/src/2021_07/07_26/friend.txt", "rt");
    int ret;
    
    while(1)
    {
        ret=fscanf(fp, "%s %c %d", name, &sex, &age);
        if(ret==EOF)
            break;
        printf("%s %c %d \n", name, sex, age);
    }
    fclose(fp);
    return 0;
}