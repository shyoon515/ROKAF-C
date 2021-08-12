#include <stdio.h>

typedef struct point
{
    int xpos;
    int ypos;
} Point;

typedef struct rectangle
{
    Point leftup;
    Point rightdown;
} Rectangle;

void PrintRectanglePoints(Rectangle * rect)
{
    printf("[%d, %d], [%d, %d], [%d, %d], [%d, %d] \n",
           (rect->leftup).xpos, (rect->leftup).ypos,
          (rect->rightdown).xpos, (rect->leftup).ypos,
          (rect->leftup).xpos, (rect->rightdown).ypos,
          (rect->rightdown).xpos, (rect->rightdown).ypos);
}

void PrintRectangleArea(Rectangle * rect)
{
    int length, height;
    
    length = (rect->leftup).xpos > (rect->rightdown).xpos ? (rect->leftup).xpos - (rect->rightdown).xpos : (rect->rightdown).xpos - (rect->leftup).xpos;
    height = (rect->leftup).ypos > (rect->rightdown).ypos ? (rect->leftup).ypos - (rect->rightdown).ypos : (rect->rightdown).ypos - (rect->leftup).ypos;
    printf("Area of Rectangle: %d\n", length*height);
}

int main(void)
{
    Rectangle rect = {{0,0}, {100,100}};
    PrintRectangleArea(&rect);
    PrintRectanglePoints(&rect);
    return 0;
}