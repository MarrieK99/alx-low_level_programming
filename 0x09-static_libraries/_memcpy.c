#include "main.h"
/**
 * _memcpy - Copy memory area
 * @dest: The destination memory area
 * @src: The source memory area
 * @n: The number of bytes to copy
 *
 * Return: The pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *dest_start = dest;

while (n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

return (dest_start);
}
