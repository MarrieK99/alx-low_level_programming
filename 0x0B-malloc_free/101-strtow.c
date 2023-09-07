#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
char **tab;
int i, j;
char *token;

if (str == NULL || str[0] == '\0')
return (NULL);

j = strlen(str) + 1;
tab = malloc(sizeof(char *) * j);
if (tab == NULL)
{
printf("Failed to allocate memory\n");
return (NULL);
}

i = 0;
token = strtok(str, " ");
while (token != NULL)
{
tab[i] = token;
i++;
token = strtok(NULL, " ");
}

tab[i] = NULL;
if (token != NULL)
{
free(tab);
return (NULL);
}

return (tab);
}
tab[i] = NULL;
return (tab);
}




