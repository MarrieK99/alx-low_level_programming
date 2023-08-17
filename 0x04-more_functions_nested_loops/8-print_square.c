#include "main.h"

/**
 * print_square - Prints a square using _putchar
 * @size: The size of the square
 *
 * Description: function prints square of '#' characters using _putchar function.
 * It prints 'size' number of rows and columns.
 */
void print_square(int size)
{
int row, col;

if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 0; row < size; row++)
{
for (col = 0; col < size; col++)
{
_putchar('#');
}
_putchar('\n');
}
}
