#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This program prints all single-digit numbers of base 10
 * starting from 0, followed by a new line, using only two putchar calls.
 *
 * Return: Always 0 (Success)
 */
int main(void)

{

int i;

for (i = 0; i <= 9; i++)

{

putchar(i + '0');

}

putchar('\n');

return 0;

}
