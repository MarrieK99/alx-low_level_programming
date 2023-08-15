#include "main.h"

/**
 * print_alphabet_x10 - Prints the lowercase alphabet ten times followed by a new line.
 */
void print_alphabet_x10(void)
{
char letter = 'a';
int count = 0;

while (count < 10) /* Repeat 10 times*/
{
while (letter <= 'z') /* Print alphabet from 'a' to 'z'*/
{
_putchar(letter);
letter++;
}

_putchar('\n'); /* Print a new line after each alphabet*/
letter = 'a'; /* Reset the letter for the next iteration*/
count++;
}
}
