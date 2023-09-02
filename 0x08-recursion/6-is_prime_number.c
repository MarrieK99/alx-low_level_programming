#include "main.h"

/**
 * is_prime_recursive - Check if a number is prime recursively.
 * @n: The number to check.
 * @divisor: The current divisor.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
if (n <= 1)
{
/* 0 and 1 are not prime */
return (0);
}
if (divisor < 2)
{
/* Divisor less than 2, all possibilities checked */
return (1);
}
if (n % divisor == 0)
{
/* n divisible by current divisor, not prime */
return (0);
}
/* Recursively check with the next divisor */
return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
return (is_prime_recursive(n, n - 1));
}


