#include "main.h"

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or insufficient memory is available, returns NULL.
 *         Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
char *dup;
unsigned int i, len = 0;

if (str == NULL)
return (NULL);

while (str[len])
len++;

dup = malloc(sizeof(char) * len + 1);

if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = str[i];

dup[len] = '\0';

return (dup);
}

