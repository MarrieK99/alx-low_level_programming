#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: A pointer to the memory previously allocated with malloc.
 * @old_size: The size, in bytes, of the allocated space for ptr.
 * @new_size: The new size, in bytes, of the new memory block.
 *
 * Return: A pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
unsigned int min_size;
char *src, *dest;
unsigned int i;

if (ptr == NULL)
{
new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);
return (new_ptr);
}

if (new_size == old_size)
return (ptr);

if (new_size == 0)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);

if (new_ptr == NULL)
return (NULL);

min_size = (old_size < new_size) ? old_size : new_size;

src = (char *)ptr;
dest = (char *)new_ptr;

for (i = 0; i < min_size; i++)
dest[i] = src[i];

free(ptr);
return (new_ptr);
}
