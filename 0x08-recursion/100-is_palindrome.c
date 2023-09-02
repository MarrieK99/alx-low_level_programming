#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: input string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int len = 0;
if (*s)
len = _strlen(s) - 1;
return (check_palindrome(s, len, 0));
}

/**
 * _strlen - returns the length of a string
 * @s: input string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen(s + 1));
}

/**
 * check_palindrome - recursively checks if string is palindrome
 * @s: input string
 * @len: length of the string
 * @i: current index
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int check_palindrome(char *s, int len, int i)
{
if (i >= len)
return (1);
if (s[i] != s[len])
return (0);
return (check_palindrome(s, len - 1, i + 1));
}

