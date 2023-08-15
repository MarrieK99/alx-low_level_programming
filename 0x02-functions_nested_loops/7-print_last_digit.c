#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The number.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
int last_digit = n % 10; /* Calculate last digit */

if (last_digit < 0)
last_digit = -last_digit; /* Convert negative to positive */

_putchar(last_digit + '0'); /* Print and return last digit */
return (last_digit);
}
