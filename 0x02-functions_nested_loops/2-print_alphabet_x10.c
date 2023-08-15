#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times followed by a new line.
 */
void print_alphabet_x10(void)
{
char letter;
int count = 0;

while (count < 10)
{
letter = 'a';
while (letter <= 'z')
{
_putchar(letter);
letter++;
}
_putchar('\n');
count++;
}
}
