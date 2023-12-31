#include <unistd.h>

/**
 * print_putchar - Prints _putchar, followed by a new line
 *
 * Description:
 * function prints string "_putchar", followed by a new line character,
 * using the write system call to the standard output.
 */
void print_putchar(void)
{
write(1, "_putchar\n", 9);
}

/**
 * main - Entry point of the program
 *
 * Description:
 * main function serves as the entry point of the program.
 * calls print_putchar function to print "_putchar"
 * and returns 0 to indicate successful execution.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
print_putchar();
return (0);
}
