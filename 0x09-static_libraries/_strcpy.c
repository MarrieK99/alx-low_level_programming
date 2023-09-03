#include "main.h"
/**
 * _strcpy - Copy a string to another string
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
char *dest_start = dest;

while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (dest_start);
}
