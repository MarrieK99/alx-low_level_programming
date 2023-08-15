#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line.
 *
 * Description:
 * This function prints the lowercase alphabet in a continuous sequence,
 * from 'a' to 'z', followed by a newline character.
 */
void print_alphabet(void)
{
char letter = 'a'; /* Start with the letter 'a'*/

while (letter <= 'z') /* Loop through the alphabet*/
{
_putchar(letter); /* Print the current letter*/
letter++; /*Move to the next letter*/
}
_putchar('\n'); /* Print a newline after the alphabet*/
}
