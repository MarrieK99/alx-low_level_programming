#include "main.h"
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: Minimum value
 * @max: Maximum value
 * Return: Pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	arr[i] = min++;

	return (arr);
}
