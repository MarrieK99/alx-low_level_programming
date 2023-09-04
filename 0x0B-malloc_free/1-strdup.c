#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in memory.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the newly allocated duplicated string,
 *         or NULL if it fails or if str is NULL.
 */
char *_strdup(char *str)
{
	if (str == NULL)
	return (NULL);

	unsigned int len = 0;
	while (str[len] != '\0')
		len++;

	char *duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);

	for (unsigned int i = 0; i <= len; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
