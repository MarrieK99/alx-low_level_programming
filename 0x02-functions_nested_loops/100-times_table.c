#include <stdio.h>

/**
 * print_times_table - Prints the n times table
 * @n: The value specifying the times table
 */
void print_times_table(int n)
{
if (n < 0 || n > 15)
return;

int i;
int j;

for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
int result = i * j;

if (j == 0)
printf("%d", result);
else
printf(", %3d", result);
}
printf("\n");
}
}

int main(void)
{
int n = 10; /* Change this to the desired n value */
print_times_table(n);

return (0);
}
