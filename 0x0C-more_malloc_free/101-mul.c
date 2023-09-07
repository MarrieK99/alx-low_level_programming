#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Check if a string contains only digits.
 * @str: The input string
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_digit(char *str)
{
while (*str)
{
if (*str < '0' || *str > '9')
return (0);
str++;
}
return (1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
unsigned long num1, num2, result;
if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
{
printf("Error\n");
return (98);
}

/* Convert command-line arguments to integers &  multiply */
num1 = strtoul(argv[1], NULL, 10);
num2 = strtoul(argv[2], NULL, 10);
result = num1 *num2;

printf("%lu\n", result);

return (0);
}

