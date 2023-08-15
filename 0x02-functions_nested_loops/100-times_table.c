#include "main.h"

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
/* Print leading spaces for single-digit numbers */
if (product < 10 && j != 1)
{
_putchar(' ');
_putchar(' ');
}
else if (product < 100 && j != 1)
{
_putchar(' ');
}
if (product >= 100)
{
digit = (product / 100) + '0';
_putchar(digit);
digit = ((product / 10) % 10) + '0';
_putchar(digit);
}
else if (product >= 10)
{
digit = (product / 10) + '0';
_putchar(digit);
}

digit = (product % 10) + '0';
_putchar(digit);

if (j < n)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
