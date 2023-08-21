#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - The entry point of the program.
 *
 * Return: The exit status of the program (0 on success).
 */
int main(void)
{
int i;  /* Move the loop variable declaration here */
char password[7];  /* 6 characters for password + 1 for null terminator */
const char charset[] = "abcdefghiABCDEFGHIJKLMNOPQRSTUVWXY3456789";
int charset_length = sizeof(charset) - 1;

srand(time(NULL));  /* Initialize random number generator with current time */

for (i = 0; i < 6; i++)  /* Use loop variable outside loop declaration */
{
int index = rand() % charset_length;/* Generate rndm indx inside charset */
password[i] = charset[index];  /* Assign random character to password */
}

password[6] = '\0';  /* Null-terminate the password */

printf("Generated password: %s\n", password);

return (0);
}
