#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, rows = 5, k = 0;

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= rows - i; j++)
        {
            printf("  ");
        }
        for (k = 1; k <= (2 * i - 1); k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}