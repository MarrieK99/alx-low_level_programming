#include <unistd.h>
/**
 * Main - Entry point
 * print_putchar - prints _putchar, followed by a new line
 *
 * Return: void
 */
/* print_putchar - prints _putchar, followed by a new line*/
void print_putchar(void)
{
write(1, "_putchar\n", 9);
}
/* Main - Entry point*/
int main(void)
{
print_putchar();
return (0);
}
