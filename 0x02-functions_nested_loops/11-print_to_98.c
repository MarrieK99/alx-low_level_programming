void print_number(int n);

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
if (n <= 98) {
for (; n < 98; n++) {
print_number(n);
print_char(',');
print_char(' ');
}
}
else
{
for (; n > 98; n--) {
print_number(n);
print_char(',');
print_char(' ');
}
}
print_number(98);
print_char('\n');
}

/* Custom print functions */

/* Print a character to standard output */
void print_char(char c);

/* Print an integer to standard output */
void print_number(int n)
{
int divisor = 1;

if (n < 0) {
print_char('-');
n = -n;
}

while (n / divisor > 9) {
divisor *= 10;
}

while (divisor != 0) {
print_char(n / divisor + '0');
n %= divisor;
divisor /= 10;
}
}

/* Custom print_char implementation */
void print_char(char c)
{
    /* Implement your custom printing mechanism here */
}
