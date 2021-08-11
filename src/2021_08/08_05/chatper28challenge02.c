#include <stdio.h>
#include <stdlib.h>

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
    int i=0;
    int status = 1;
    Book * books = (Book *)malloc(sizeof(Book)*5);
    
    while(status==1)
    {
        if(i%5==0 && i>0)
        {
            books = (Book *)realloc(books, sizeof(Book)*(i+5));
        }
        GetBookInfo(&books[i++]);
        printf("도서 정보를 더 입력하려면 '1', 그만 입력하려면 '0'을 입력: ");
        scanf("%d", &status);
        getchar();
    }
    
    
    puts("\n도서 정보 출력");
    for(int j=0; j<i; j++)
    {
        printf("book %d\n", j+1);
        PrintBookInfo(&books[j]);
    }
    return 0;
}