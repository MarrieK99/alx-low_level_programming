#include "main.h"

/**
 * print_times_table - Print times table up to 10 for a given value
 * @n: The value specifying the times table
 */
void print_times_table(int n)
{
int i, j;
char digit;

if (n > 15 || n < 0)
return;

for (i = 0; i <= 10; i++)
{
for (j = 1; j <= n; j++)
{
int product = i * j;

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
if (i * (j + 1) < 10)
_putchar(' ');
}
}
_putchar('\n');
}
}
