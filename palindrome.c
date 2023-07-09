
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, rem, temp;
    int rev = 0;
    printf("Number :");
    scanf("%d", &n);

    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    getch();
}