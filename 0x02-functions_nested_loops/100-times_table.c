#include <unistd.h>

/**
 * print_char - Print a character
 * @c: The character to print
 */
void print_char(char c)
{
write(1, &c, 1);
}

/**
 * print_number - Print an integer
 * @number: The integer to print
 */
void print_number(int number)
{
    /* Your print_number implementation*/
}

/**
 * print_times_table - Print the n times table
 * @n: The value for the times table
 */
void print_times_table(int n)
{
    /* Your print_times_table implementation*/
}

/**
 * main - Entry point of the program
 * Return: Always 0 (Success)
 */
int main(void) {
int n = 12; /* Change to desired value*/
print_times_table(n);
return (0);
}
