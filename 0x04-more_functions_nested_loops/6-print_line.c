#include "main.h"

/**
 * print_line - Draw a straight line using the character '_'
 * @n: Number of times the character '_' should be printed
 */
void print_line(int n)
{
    if (n <= 0)
    {
        _putchar('\n');
        return;
    }

    while (n > 0)
    {
        _putchar('_');
        n--;
    }
    _putchar('\n');
}
