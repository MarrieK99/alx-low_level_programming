#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the first 50 Fibonacci numbers,
 *              separated by comma and space
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int fib[50]; /* Array to store Fibonacci numbers*/
    fib[0] = 1;
    fib[1] = 2;

    /* Calculate and store the first 48 Fibonacci numbers*/
    for (int i = 2; i < 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    /* Print the Fibonacci numbers separated by comma and space*/
    for (int i = 0; i < 49; i++)
    {
        printf("%d, ", fib[i]);
    }
    printf("%d\n", fib[49]); /* Print the last number without comma and space*/

    return (0);
}
