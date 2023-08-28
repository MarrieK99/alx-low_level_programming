#include "main.h"

/**
 * set_string - Sets value of pointer to char.
 * @s: Pointer to a pointer to char.
 * @to: Pointer to char containing value to be assigned.
 */
void set_string(char **s, char *to)
{
*s = to;
}
