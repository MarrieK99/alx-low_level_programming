#include <unistd.h>
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: A pointer to a string.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
int length = 0;

while (*s != '\0')
{
length++;
s++;
}

return (length);
}

/**
 * puts_half - Prints half of a string followed by a new line.
 * @str: A pointer to the string to be printed.
 */
void puts_half(char *str)
{
int length = _strlen(str);
int start_index;

if (length % 2 == 0)
{
start_index = length / 2;
}
else
{
start_index = (length - 1) / 2;
}

while (str[start_index] != '\0')
{
write(1, &str[start_index], 1);
start_index++;
}

write(1, "\n", 1);
}
