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
unsigned long long int a = 1, b = 2, c;
int i;

printf("%llu, %llu", a, b);

while (i < 98)
{
c = a + b;
printf(", %lu", c);

a = b;
b = c;

i++;
}

printf("\n");

return (0);
}
