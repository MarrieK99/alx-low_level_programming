/**
 * cap_string - Capitalizes words of string.
 * @str: The string to be modified.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
char *temp = str;
int capitalize_next = 1; /* Flag  indicate next character to be capitalized */

while (*temp)
{
if (capitalize_next && (*temp >= 'a' && *temp <= 'z'))
{
*temp -= 32; /* Convert lowercase to uppercase */
capitalize_next = 0;
}

if (*temp == ' ' || *temp == '\t' || *temp == '\n' ||
*temp == ',' || *temp == ';' || *temp == '.' ||
*temp == '!' || *temp == '?' || *temp == '"' ||
*temp == '(' || *temp == ')' || *temp == '{' ||
*temp == '}')
{
capitalize_next = 1; /* Set flag to capitalize next char */
}

temp++;
}

return (str);
}
