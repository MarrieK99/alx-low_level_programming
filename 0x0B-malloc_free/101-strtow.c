#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 *
 * Return: Nothing
 */
void print_tab(char **tab)
{
int i;

for (i = 0; tab[i] != NULL; ++i)
{
printf("%s\n", tab[i]);
}
}

/**
 * strtow - Splits a string into words
 * @str: The input string
 *
 * Return: A pointer to an array of strings (words)
 */
char **strtow(char *str)
{
char **words;
int i, j, word_count = 0, in_word = 0;

if (str == NULL || *str == '\0')
return (NULL);

for (i = 0; str[i]; i++)
{
if (str[i] != ' ' && str[i] != '\t')
{
if (!in_word)
{
in_word = 1;
word_count++;
}
}
else
{
in_word = 0;
}
}

words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
{
free(words);
return (NULL);
}


in_word = 0;
for (i = 0, j = 0; str[i]; i++)
{
if (str[i] != ' ' && str[i] != '\t')
{
if (!in_word)
{
in_word = 1;
words[j] = str + i;
j++;
}
}
else
{
in_word = 0;
str[i] = '\0';
}
}
words[j] = NULL;
return (words);
}

