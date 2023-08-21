#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
char password[7];  /*6 characters for password + 1 for null terminator*/
const char charset[] = "abcdefghiABCDEFGHIJKLMNOPQRSTUVWXY3456789";
int charset_length = sizeof(charset) - 1;

srand(time(NULL));  /* Initialize random number generator w/current time*/

for (int i = 0; i < 6; i++)
{
int index = rand() % charset_length;  /* Generate random index within charset*/
password[i] = charset[index];  /* Assign random character to password*/
}

password[6] = '\0';  /* Null-terminate the password*/

printf("Generated password: %s\n", password);

return (0);
}
