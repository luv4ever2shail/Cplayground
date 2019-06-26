/*
Student Info:
UWin ID: 105 167 718
Name: Shail Patel
Lab Section Number:
Use this part to report your on comments on the code
State clearly any valid assumptions
*/
#include <stdio.h>

void DrawHalfPyramid(int rows)
{
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", i * j);
        }
        printf("\n");
    }
}

int main()
{
    int rows = 0;
    do
    {
        printf("please enter the number of rows: ");
        scanf("%d", &rows);
    } while (!(rows >= 2 && rows <= 10));
    
    printf("printing a half pyramid of %d rows", rows);
    printf("\n");

    DrawHalfPyramid(rows);

    return 0;
}
