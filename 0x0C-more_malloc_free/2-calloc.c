#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 * Return: Pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);


	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
	ptr[i] = 0;


	return (ptr);
}
