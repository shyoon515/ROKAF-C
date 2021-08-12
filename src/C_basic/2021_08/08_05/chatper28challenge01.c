#include <stdio.h>

typedef struct book
{
    char title[30];
    char author[30];
    int pageNo;
} Book;

void GetBookInfo(Book * book)
{
    printf("저자: ");
    gets((*book).author);
    //scanf("%s", (*book).author);
    printf("제목: ");
    gets((*book).title);    // fgets 함수는 \n을 제외시키거나 버리지 않고 문자열의 일부로 받아들임.
    //scanf("%s", (*book).title);    scanf 함수는 띄어쓰기를 가져올 수 없음을 잊지 말자!
    printf("페이지 수: ");
    scanf("%d", &(*book).pageNo);
    getchar();
}

void PrintBookInfo(Book * book)
{
    printf("저자: %s \n", (*book).author);
    printf("제목: %s \n", (*book).title);
    printf("페이지 수: %d \n", (*book).pageNo);
}

int main(void)
{
    int i;
    Book books[3];
    
    puts("도서 정보 입력");
    for(i=0; i<3; i++)
    {
        GetBookInfo(&books[i]);
    }
    
    puts("\n도서 정보 출력");
    for(i=0; i<3; i++)
    {
        printf("book %d\n", i+1);
        PrintBookInfo(&books[i]);
    }
    return 0;
}