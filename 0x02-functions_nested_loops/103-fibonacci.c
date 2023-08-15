#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Finds and prints the sum of even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, next_fib;
long int sum = 0;

while (fib1 <= 4000000)
{
if (fib1 % 2 == 0)
sum += fib1;

next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;
}

printf("%ld\n", sum);

return (0);
}
