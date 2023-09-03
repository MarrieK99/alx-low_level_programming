#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: The pointer to dest
 */
char *_strcat(char *dest, char *src)
{

char *dest_start = dest;

while (*dest)
dest++;

while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';
return (dest_start);
}
