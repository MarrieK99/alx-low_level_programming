#include <unistd.h>

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 *
 * Uses _putchar twice
 *
 * Prints the lowercase alphabet, one character per line
 */
void print_alphabet(void)
{
char ch = 'a'; /* declare and initialize current letter */

while (ch <= 'z')
{ /* iterate over the lowercase alphabet */
_putchar(ch++); /* print and increment current letter */
}
 _putchar('\n'); /* print a newline character */
}
