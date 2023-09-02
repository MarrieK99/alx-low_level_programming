#include "main.h"

/**
 * _sqrt_recursion - Calculate natural square root of number.
 * @n: number to calculate square root for.
 *
 * Return: natural square root of n. n not natural square root, return -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);

return (sqrt_recursive(n, 1));
}

/**
 * sqrt_recursive - recursive helper function to calculate square root.
 * @n: number to calculate square root for.
 * @guess: current guess for square root.
 *
 * Return: natural square root of n. n not natural square root, return -1.
 */
int sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);

return (sqrt_recursive(n, guess + 1));
}
