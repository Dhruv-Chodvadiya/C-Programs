#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter the number to check prime:");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("Number is not prime");
            return 0;
        }
    }
    printf("Number is prime");
}