#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse.
 * @s: The string to be printed in reverse.
 */
void _print_rev_recursion(char *s)
{
/* Base case: If we've reached end of string or empty, return. */
if (*s == '\0')
return;

/* Recursively call function with next character in string. */
_print_rev_recursion(s + 1);

/* After all recursive calls, print current character. */
_putchar(*s);
}
