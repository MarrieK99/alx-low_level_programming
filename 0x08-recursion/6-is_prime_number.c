#include "main.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
int i;
if (n <= 1)
{
/* 0 and 1 are not prime numbers */
return (0);
}

for (i = 2; i < n; i++)
{
if (n % i == 0)
{
/* If n is divisible by any number between 2 and n-1, it's not prime */
return (0);
}
}

/* If no divisors are found, n is prime */
return (1);
}

