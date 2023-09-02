#include "main.h"

/**
 * _puts_recursion - Prints string followed by new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
/* Base case: If reached end of string or empty, print newline and return. */
if (*s == '\0')
{
_putchar('\n');
return;
}

/* Print current character and move to next character in string recursively. */
_putchar(*s);
_puts_recursion(s + 1);
}
