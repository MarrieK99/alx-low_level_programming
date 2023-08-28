#include "main.h"

/**
 * _strspn - Gets length of a prefix substring.
 * @s: Pointer to the string to search.
 * @accept: string containing characters to be accepted.
 *
 * Return: number of bytes in initial segment s consist only of bytes
 * from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int is_acceptable;

while (*s)
{
is_acceptable = 0;
while (*accept)
{
if (*s == *accept)
{
is_acceptable = 1;
break;
}
accept++;
}

if (!is_acceptable)
return (count);

count++;
s++;
}

return (count);
}
