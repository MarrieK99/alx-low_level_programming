#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the memory block to be reallocated
 * @old_size: Size of the old memory block
 * @new_size: New size of the memory block
 * Return: Pointer to the reallocated memory block or NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	return (ptr);

	if (ptr == NULL)
		{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
    		return (NULL);
	else
		return (new_ptr);
		}

	if (new_size == 0)
		{
		free(ptr);
		return (NULL);
		}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
	old_size = new_size;

	for (unsigned int i = 0; i < old_size; i++)
	*((char *)new_ptr + i) = *((char *)ptr + i);

	free(ptr);
	return (new_ptr);
}
