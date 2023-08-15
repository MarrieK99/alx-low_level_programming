/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
int is_negative = 0;

if (n > 98) {
is_negative = 1;
}

while (n != 98) {
if (is_negative) {
n--;
}
else
{
n++;
}

int temp = n;
if (temp < 0) {
temp = -temp;
print_char('-');
}

int divisor = 1;
while (temp / divisor > 9)
{
divisor *= 10;
}

while (divisor != 0) {
print_char(temp / divisor + '0');
temp %= divisor;
divisor /= 10;
}

if (n != 98) {
print_char(',');
print_char(' ');
}
}

print_char('9');
print_char('8');
print_char('\n');
}

/* Custom print_char implementation */
void print_char(char c)
{
    /* Implement your custom printing mechanism here */
}
