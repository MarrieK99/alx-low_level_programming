#include "main.h"
#include <stddef.h>


/**
 * _strpbrk - Locates first occurrence of byte from accept in string s.
 * @s: Pointer to the string to search.
 * @accept: string containing the bytes to search for.
 *
 * Return: pointer to byte in s that matches one of bytes in accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
while (*s)
{
char *curr_accept = accept;
while (*curr_accept)
{
if (*s == *curr_accept)
return (s);
curr_accept++;
}
s++;
}
return (NULL);
}
