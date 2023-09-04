#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 * strtow - Splits a string into words.
 * Return: The number of words.
 */
int count_words(char *str);
/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: An array of words, or NULL on failure.
 */
char **strtow(char *str)
{
int num_words, i, word_len, in_word;
char **words;


if (str == NULL || *str == '\0')
return (NULL);

num_words = count_words(str);
if (num_words == 0)
return (NULL);

words = malloc((num_words + 1) * sizeof(char *));
if (words == NULL)
return (NULL);

in_word = 0;
word_len = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
{
if (!in_word)
{
in_word = 1;
words[word_len] = str + i;
word_len++;
}
}
else
{
if (in_word)
{
in_word = 0;
str[i] = '\0';
}
}
}

words[word_len] = NULL;

return (words);
}
