#include <stdio.h>
#include <conio.h>
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 2; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = i; k <= n; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}