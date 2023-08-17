#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - Finds and prints the largest prime factor of a number
 * @n: The number to find the largest prime factor of
 *
 * Description: This function calculates the largest prime factor of
 * the given number 'n'. It iterates through possible divisors starting
 * from 2 up to the square root of 'n', dividing 'n' by each divisor
 * as long as it's divisible. The last value of 'n' will be the largest
 * prime factor.
 */
void largest_prime_factor(unsigned long n)
{
    unsigned long divisor = 2;

    while (n > 1)
    {
        if (n % divisor == 0)
        {
            n /= divisor;
        }
        else
        {
            divisor++;
        }
    }

    printf("%lu\n", divisor);
}

int main(void)
{
    unsigned long number = 612852475143;
    largest_prime_factor(number);

    return (0);
}
