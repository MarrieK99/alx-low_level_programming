#include "main.h"

/**
 * factorial - Calculate factorial of number.
 * @n: number to calculate factorial of.
 *
 * Return: factorial of number, or -1 if n is negative.
 */
int factorial(int n)
{
if (n < 0)
return (-1);

if (n == 0)
return (1);

return (n * factorial(n - 1));
}
