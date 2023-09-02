#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts_recursion(char *s)
{
    /* Base case: If we've reached the end of the string or it's empty, print a newline and return. */
    if (*s == '\0')
    {
        _putchar('\n');
        return;
    }

    /* Print the current character and move to the next character in the string recursively. */
    _putchar(*s);
    _puts_recursion(s + 1);
}