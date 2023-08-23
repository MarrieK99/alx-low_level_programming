#include "main.h"

/**
 * print_number - Prints integer using _putchar.
 * @n: The integer to be printed.
 *
 * Return: None.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10)
print_number(n / 10);

_putchar((n % 10) + '0');
}
