#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements array of integers followed by new line.
 * @a: A pointer to the array of integers.
 * @n: The number of elements to be printed.
 */
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

if (i < n - 1)
{
printf(", ");
}
}

printf("\n");
}
