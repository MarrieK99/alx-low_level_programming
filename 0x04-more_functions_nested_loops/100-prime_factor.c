#include <stdio.h>
#include <math.h>
/**
 * Finds largest prime factor of a number.
 * @param n The number to find the largest prime factor of.
 * @return The largest prime factor of n.
 */

void largest_prime_factor(unsigned long n)
{
unsigned long divisor = 2;

while (n > 1)
{
if (n % divisor == 0)
{
n /= divisor;
}
else
{
divisor++;
}
}

printf("%lu\n", divisor);
}

int main(void)
{
unsigned long number = 612852475143;
largest_prime_factor(number);

return (0);
}
