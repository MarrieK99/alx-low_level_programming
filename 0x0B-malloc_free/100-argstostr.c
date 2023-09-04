#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: The number of command line arguments
 * @av: An array of command line argument strings
 *
 * Return: A pointer to the concatenated string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int i, j, k = 0, len = 0;
char *str;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++; /* for the newline character */
}

len++; /* for the null terminator */

str = malloc(len *sizeof(char));

if (str == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[k] = av[i][j];
k++;
}
str[k] = '\n';
k++;
}
str[k] = '\0';
return (str);
}
