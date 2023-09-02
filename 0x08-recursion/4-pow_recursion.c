#include "main.h"

/**
 * _pow_recursion - Calculate value of x raised to power of y.
 * @x: The base number.
 * @y: The exponent.
 *
 * Return: result of x raised to power of y. If y is -, return -1.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}
