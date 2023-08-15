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

            product = row * column;

            /* Print a space before single-digit numbers */
            if (product <= 9)
                _putchar(' ');

            _putchar(' '); /* Print a space */
            _putchar(product + '0'); /* Print the product */
        }

        _putchar('\n'); /* Move to the next row */
    }
}
