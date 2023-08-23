/**
 * leet - Encodes a string into 1337.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
char *temp = str;
char leet_map[5][2] = {
{'a', '4'},
{'e', '3'},
{'o', '0'},
{'t', '7'},
{'l', '1'}
};
int i;

while (*temp)
{
i = 0;
while (i < 5)
{
if (*temp == leet_map[i][0] || *temp == leet_map[i][0] - 'a' + 'A')
{
*temp = leet_map[i][1];
break;
}
i++;
}
temp++;
}

return (str);
}
