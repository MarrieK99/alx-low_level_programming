#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the current source file
 * (equivalent to __FILE__ in C) followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
