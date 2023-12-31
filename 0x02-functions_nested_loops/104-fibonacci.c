#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line. The numbers are
 * separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a = 1, b = 2, c;
int i;

printf("%d, %d", a, b);

for (i = 2; i < 98; i++)
{
c = a + b;
printf(", %d", c);
a = b;
b = c;
if (c > 1000000000)
{
a /= 10;
b /= 10;
}
}

printf("\n");

return (0);
}
