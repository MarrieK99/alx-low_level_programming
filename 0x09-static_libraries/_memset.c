#include "main.h"
/**
 * _memset - Fill memory with a constant byte
 * @s: The memory area to fill
 * @b: The byte to fill the memory area with
 * @n: The number of bytes to fill
 *
 * Return: The pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
char *start = s;

while (n > 0)
{
*s = b;
s++;
n--;
}

return (start);
}
