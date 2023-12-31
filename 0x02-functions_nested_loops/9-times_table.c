#include "main.h"

/**
 * times_table - Prints the 9 times table in the specified format.
 */
void times_table(void)
{
int row, column, product;

for (row = 0; row <= 9; row++)
{
_putchar('0'); /* Print the first cell */

for (column = 1; column <= 9; column++)
{
_putchar(','); /* Print the separator */
_putchar(' '); /* Print a space */

product = row * column;

/* Print a space before single-digit numbers */
if (product <= 9)
_putchar(' ');
/* Print tens digit of product */
if (product >= 10)
_putchar((product / 10) + '0');

_putchar((product % 10) + '0'); /* Print ones digit of product */
}

_putchar('\n'); /* Move to the next row */
}
}
