#include <stdio.h>

/**
 * main - Prints the program's name, followed by a new line
 * @argc: The number of arguments passed to the program
 * @argv: An array containing the program's arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return (0);
}
