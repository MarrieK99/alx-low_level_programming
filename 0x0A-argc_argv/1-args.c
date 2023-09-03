#include <stdio.h>

/**
 * main - Entry point
 * @argc: number of command-line arguments
 * @argv: array containing command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv; /* Suppress unused variable warning */

printf("%d\n", argc - 1);

return (0);
}
