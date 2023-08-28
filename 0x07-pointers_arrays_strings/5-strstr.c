#include "main.h"
#include <stddef.h>
/**
 * _strstr - Locates substring within a string.
 * @haystack: Pointer to string to search within.
 * @needle: Pointer to substring to search for.
 *
 * Return: pointer to beginning of located substring in haystack,
 * or NULL if substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *haystack_start = haystack;
char *needle_start = needle;

while (*haystack && *needle && *haystack == *needle)
{
haystack++;
needle++;
}

if (!*needle)
return (haystack_start);

haystack = haystack_start + 1;
needle = needle_start;
}

return (NULL);
}
