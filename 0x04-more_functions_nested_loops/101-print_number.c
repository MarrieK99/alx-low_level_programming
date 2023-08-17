#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 *
 * Description: This function prints an integer using the _putchar function.
 * It extracts digits from the number one by one and prints them in reverse order.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}

if (n / 10 != 0)
{
print_number(n / 10);
}

_putchar(n % 10 + '0');
}

