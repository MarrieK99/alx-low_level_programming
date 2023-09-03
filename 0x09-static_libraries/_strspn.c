#include "main.h"
/**
 * _strspn - Get the length of a prefix substring
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: The number of bytes in the initial segment of s
 *         that consists only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found;

while (*s)
{
found = 0;
while (*accept)
{
if (*s == *accept)
{
found = 1;
break;
}
accept++;
}

if (found)
count++;
else
break;

s++;
accept -= count;
}

return (count);
}
