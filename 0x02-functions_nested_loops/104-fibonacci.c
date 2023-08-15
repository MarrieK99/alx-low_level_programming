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
unsigned long int fib1 = 1, fib2 = 2, next_fib;
int count = 0;

printf("%lu, %lu", fib1, fib2);

while (count < 96)
{
next_fib = fib1 + fib2;
printf(", %lu", next_fib);

fib1 = fib2;
fib2 = next_fib;

count++;
}

printf("\n");

return (0);
}
