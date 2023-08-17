#include "main.h"

/**
 * _isupper - Check if a character is uppercase
 * @c: The character to be checked
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1); /* The character is uppercase */
}
else
{
return (0); /* The character is not uppercase */
}
}
