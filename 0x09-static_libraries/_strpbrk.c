#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Search a string for any of a set of bytes
 * @s: The string to search
 * @accept: The string containing the characters to search for
 *
 * Return: A pointer to the first occurrence in s of any of
 *         the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *a = accept;
while (*a)
{
if (*s == *a)
return (s);
a++;
}
s++;
}

return (NULL);
}
