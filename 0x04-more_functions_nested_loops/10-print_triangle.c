#include "main.h"

/**
 * print_triangle - Prints a triangle followed by a new line
 * @size: Size of the triangle
 *
 * Description: Prints a right-angled triangle made of '#'
 * characters. The base of the triangle is determined by
 * the 'size' parameter.
 */
void print_triangle(int size)
{
int row, col;

if (size <= 0)
{
_putchar('\n');
return;
}

for (row = 1; row <= size; row++)
{
for (col = 1; col <= size; col++)
{
if (col <= size - row)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
