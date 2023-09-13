#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - Searches for integer in array based on comparison function
 * @array: The array of integers to search
 * @size: The number of elements in the array
 * @cmp: A pointer to the comparison function
 *
 * Description: This function searches for the first element in the array
 * for which the comparison function returns a non-zero value.
 *
 * Return: index of first matching element, or -1 if no match/invalid input.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array && cmp)
{
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}
}
return (-1);
}
