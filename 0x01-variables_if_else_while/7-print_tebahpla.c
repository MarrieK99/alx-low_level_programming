#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

/* Print the lowercase alphabet in reverse using putchar */
for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}

putchar('\n');

return (0);
}
