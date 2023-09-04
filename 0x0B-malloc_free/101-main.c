#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string
 * @str: The input string
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
int count = 0;
int in_word = 0;

if (str == NULL)
return (0);

while (*str)
{
if (*str == ' ' || *str == '\t' || *str == '\n')
{
if (in_word)
{
in_word = 0;
}
}
else
{
if (!in_word)
{
in_word = 1;
count++;
}
}
str++;
}

return (count);
}
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
 * main - Entry point
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
    char **tab;

    tab = strtow("ALX School #cisfun");
    if (tab == NULL)
    {
        printf("Failed\n");
        return (1);
    }
    print_tab(tab);
    return (0);
}
