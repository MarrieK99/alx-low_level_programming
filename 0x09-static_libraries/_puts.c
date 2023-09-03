#include <unistd.h>
#include "main.h"
/**
 * _puts - Print a string to stdout
 * @s: The string to print
 */
void _puts(char *s)
{
while (*s)
{
write(1, s, 1);
s++;
}
}
