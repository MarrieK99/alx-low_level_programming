#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: A pointer to the function to be executed on each element
 *
 * Description: function applies given function to each element of the array.
 *
 * Return: None
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array && action)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
