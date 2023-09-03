#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
/* Print the number of arguments (excluding the program name) */
if (argc > 0)
{
printf("Program name: %s\n", argv[0]);
}

return (0);
}
