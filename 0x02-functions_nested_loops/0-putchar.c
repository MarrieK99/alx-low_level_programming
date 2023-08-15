#include <unistd.h>
/**
 * print_putchar - prints _putchar, followed by a new line
 *
 * Return: void
 */
void print_putchar(void)
{
write(1, "_putchar\n", 9);
}

int main(void)
{
print_putchar();
return (0);
}
