#include <unistd.h>

/**
 * _putchar - Write a character to stdout
 * @c: The character to be written
 *
 * Return: On success, 1. On error, -1.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}
