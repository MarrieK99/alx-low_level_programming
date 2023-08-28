#include "main.h"
#include <stddef.h>
/**
 * _strchr - Locates first occurrence of char in string.
 * @s: Pointer to the string to search.
 * @c: The character to search for.
 *
 * Return: Pointer to first occurrence of char c in  string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
s++;
}

if (*s == c)
return (s);

return (NULL);
}
