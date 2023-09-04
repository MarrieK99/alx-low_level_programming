#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return:pointer to newly allocated space in memory
 *         containing the concatenated string.
 *         NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concat;
int len1 = 0, len2 = 0, i, j;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[len1])
len1++;
while (s2[len2])
len2++;

concat = malloc(sizeof(char) * (len1 + len2 + 1));

if (concat == NULL)
return (NULL);

for (i = 0; i < len1; i++)
concat[i] = s1[i];

for (j = 0; j < len2; j++)
concat[i + j] = s2[j];

concat[i + j] = '\0';

return (concat);
}
