#include <stdio.h>
#include <stdlib.h>
/**
 * is_digit - Checks if a string contains only digits
 * @str: The string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
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
 * main - Multiplies two positive numbers
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
char *num1_str;
char *num2_str;
unsigned long num1;
unsigned long num2;
unsigned long result;

if (argc != 3)
{
printf("Error\n");
return (98);
}

num1_str = argv[1];
num2_str = argv[2];

if (!is_digit(num1_str) || !is_digit(num2_str))
{
printf("Error\n");
return (98);
}

num1 = strtoul(num1_str, NULL, 10);
num2 = strtoul(num2_str, NULL, 10);
result = num1 * num2;

printf("%lu\n", result);

return (0);
}

