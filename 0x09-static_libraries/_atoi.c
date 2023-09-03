#include "main.h"
/**
 * _atoi - Convert a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}

for (; s[i] != '\0'; ++i)
{
result = result * 10 + s[i] - '0';
}

return sign * result;
}
