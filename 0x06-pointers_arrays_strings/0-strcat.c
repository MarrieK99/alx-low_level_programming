/**
 * _strcat - Concatenates two strings.
 * @dest: destination string to which src is appended.
 * @src: source string appended to dest.
 *
 * Return: pointer to resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
char *result = dest;  /* Store original dest address */

/* Move dest pointer to end of destination string */
while (*dest)
{
dest++;
}

/* Append characters of src to dest */
while (*src)
{
*dest = *src;
dest++;
src++;
}

*dest = '\0';  /* Add terminating null byte */

return (result);  /* Return resulting concatenated string */
}
