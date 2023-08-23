/**
 * _strncat - Concatenates two strings, using n bytes from src.
 * @dest: destination string to which src is appended.
 * @src: source string to append to dest.
 * @n: maximum number of bytes from src to append.
 *
 * Return: pointer to resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
char *result = dest;  /* Store original dest address */

/* Move dest pointer to end of destination string */
while (*dest)
{
dest++;
}

/* Append to n characters from src to dest */
while (*src && n > 0)
{
*dest = *src;
dest++;
src++;
n--;
}

*dest = '\0';  /* Add terminating null byte */

return (result);  /* Return resulting concatenated string */
}
