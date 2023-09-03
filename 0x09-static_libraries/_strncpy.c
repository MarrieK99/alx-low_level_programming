#include "main.h"
/**
 * _strncpy - Copy n bytes from src to dest
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy
 *
 * Return: The pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{

char *dest_start = dest;

while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

while (n > 0)
{
*dest = '\0';
dest++;
n--;
}

return (dest_start);
}
