#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to
 * the variable n and prints information about its last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;
    int lastDigit;

    /* Seed the random number generator */
    srand(time(NULL));

    /* Generate a random number between -100 and 100 */
    n = rand() - RAND_MAX / 2;

    /* Calculate the last digit of n */
    lastDigit = n % 10;

    /* Print the last digit of n */
    printf("Last digit of %d is %d ", n, lastDigit);

    /* Check the value of the last digit */
    if (lastDigit > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (lastDigit == 0)
    {
        printf("and is 0\n");
    }
    else
    {
        printf("and is less than 6 and not 0\n");
    }

    return (0);
}
