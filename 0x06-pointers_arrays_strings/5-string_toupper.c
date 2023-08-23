/**
 * string_toupper - Changes lowercase letters of string to uppercase.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *string_toupper(char *str)
{
char *temp = str;

while (*temp)
{
if (*temp >= 'a' && *temp <= 'z')
{
*temp -= 32; /* Convert lowercase to uppercase */
}
temp++;
}

return (str);
}
