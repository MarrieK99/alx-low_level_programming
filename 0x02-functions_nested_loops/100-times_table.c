#include "main.h"

/**
 * print_times_table - Print times table up to 10 for a given value
 * @n: The value specifying the times table
 */
void print_digit(int digit)
{
_putchar(' ');
_putchar(digit + '0');
}

/**
 * print_times_table - Print times table up to 10 for a given value
 * @n: The value specifying the times table
 */
void print_times_table(int n)
{
int i, j, product;
char digit;

if (n > 15 || n < 0)
return;

for (i = 0; i <= n; i++)
{
_putchar('0'); /* Print the first digit */
_putchar(','); /* Print comma */
_putchar(' '); /* Print space */

for (j = 1; j <= n; j++)
{
product = i * j;
if (product < 10 && j != 1)
{
print_digit(product);
print_digit(product);
}
else if (product < 100 && j != 1)
{
_putchar(' ');
_putchar(product / 10 + '0');
}
else if (product >= 100)
{
digit = (product / 100);
print_digit(digit);
print_digit((product / 10) % 10);
}
else if (product >= 10)
{
_putchar(product / 10 + '0');
}

_putchar(product % 10 + '0');

if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
