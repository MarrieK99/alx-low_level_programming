#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, n;
    unsigned long int fib1 = 1, fib2 = 2, next;

    n = 50; /* Number of Fibonacci numbers to generate */

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
            printf("%lu", fib1);
        else if (i == 2)
            printf("%lu", fib2);
        else
        {
            next = fib1 + fib2;
            printf(", %lu", next);
            fib1 = fib2;
            fib2 = next;
        }
    }

    printf("\n");

    return (0);
}
