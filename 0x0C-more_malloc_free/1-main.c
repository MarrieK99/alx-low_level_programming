#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(const char *s1, const char *s2, size_t n);

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat;
	concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n", concat);
	free(concat);
	return (0);
}

char *string_nconcat(const char *s1, const char *s2, size_t n)
{
	size_t s1_len = 0;
	size_t s2_len = 0;
	char *result;
	size_t i, j;

	while (s1[s1_len] != '\0')
	s1_len++;
	while (s2[s2_len] != '\0')
	s2_len++;

	result = malloc((s1_len + n + 1) * sizeof(char));
	if (result == NULL)
	{
	return (NULL);
	}

	for (i = 0; i < s1_len; i++)
	{
	result[i] = s1[i];
	}

	for (j = 0; j < n && s2[j] != '\0'; j++)
	{
	result[i + j] = s2[j];
	}

	result[i + j] = '\0';

	return (result);
}
