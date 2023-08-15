#include <unistd.h>
/**
 * Main - Entry point
 * print_putchar - prints _putchar, followed by a new line
 *
 * Return: void
 */
void print_putchar(void) /* print_putchar - prints _putchar, followed by a new line*/
{
write(1, "_putchar\n", 9);
}

int main(void)/*Main - Entry point*/
{
print_putchar();
return (0);
}
