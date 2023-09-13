#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name using a specified printing function
 * @name: Name to be printed
 * @f: Pointer to the printing function
 *
 * Description: Calls the given printing function to print the name.
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
