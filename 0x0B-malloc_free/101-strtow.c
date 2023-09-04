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
int i;
char *token;

if (str == NULL || str[0] == '\0')
return NULL;

tab = malloc(sizeof(char *) * (strlen(str) + 1));
if (tab == NULL)
return NULL;

i = 0;
token = strtok(str, " ");
while (token != NULL)
{
tab[i] = token;
i++;
token = strtok(NULL, " ");
}

if (token != NULL)
{
free(tab);
return NULL;
}

tab[i] = NULL;
return tab;
}




