#include <stdio.h>

int main(void)
{
    char words[11]={'\"','G','o','o','d',' ','t','i','m','e','\"'};
    int wordsLen;
    
    wordsLen = sizeof(words) / sizeof(char);
    for(int i=0; i<wordsLen; i++)
    {
        printf("%c", words[i]);
    }
    return 0;
}