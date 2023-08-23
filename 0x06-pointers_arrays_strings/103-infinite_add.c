#include "main.h"

/**
 * infinite_add - Adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: pointer to result, or 0 if result not stored.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1 = 0, len2 = 0, carry = 0, sum;
int i, j;

/* Calculate lengths of input strings */
while (n1[len1])
len1++;
while (n2[len2])
len2++;

/* Ensure result is stored in the buffer */
if (len1 >= size_r - 1 || len2 >= size_r - 1)
return (0);

/* Add digits and handle carry */
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';

carry = sum / 10;
r[size_r - 2] = (sum % 10) + '0';
size_r--;
}

/* Null-terminate the result */
r[size_r - 1] = '\0';

/* Reverse the result string */
for (i = 0, j = size_r - 2; i < j; i++, j--)
{
char temp = r[i];
r[i] = r[j];
r[j] = temp;
}

return (r);
}
