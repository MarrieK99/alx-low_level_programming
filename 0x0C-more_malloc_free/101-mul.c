#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * is_digit - Checks if a string is composed of digits
 * @str: Input string
 * Return: 1 if composed of digits, 0 otherwise
 */
int is_digit(char *str)
{
	if (str == NULL || *str == '\0')
	return (0);

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
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success, 98 on incorrect arguments or non-digit input
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
	printf("Error\n");
	return (98);
	}

	char *num1 = argv[1];
	char *num2 = argv[2];
	int len1 = 0, len2 = 0;

	while (num1[len1] != '\0')
		len1++;
	while (num2[len2] != '\0')
		len2++;

	int result_len = len1 + len2;
	int *result = calloc(result_len, sizeof(int));

	if (result == NULL)
	return (1);

	for (int i = len1 - 1; i >= 0; i--)
	{
	int carry = 0;
	int n1 = num1[i] - '0';

	for (int j = len2 - 1; j >= 0; j--)
		{
		int n2 = num2[j] - '0';
		int product = n1 * n2 + result[i + j + 1] + carry;

		carry = product / 10;
		result[i + j + 1] = product % 10;
		}

	result[i] += carry;
	}

	int start = (result[0] == 0) ? 1 : 0;

	for (int i = start; i < result_len; i++)
	_putchar(result[i] + '0');

	_putchar('\n');
	free(result);
	return (0);
}
