#include "main.h"
/**
 * _strncat - Concatenate two strings, up to n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes from src to concatenate
 *
 * Return: The pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{

char *dest_start = dest;

while (*dest)
dest++;

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';
return (dest_start);
}
