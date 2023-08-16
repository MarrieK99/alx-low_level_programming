#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The value specifying the times table
 */
void print_times_table(int n)
{
    if (n <= 15 && n >= 0)
    {
        int i, j, product;
        char buffer[10];

        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                product = i * j;
                if (j == 0)
                {
                    int k = 0;
                    if (product == 0)
                        _putchar('0');
                    else
                    {
                        while (product > 0)
                        {
                            buffer[k++] = (product % 10) + '0';
                            product /= 10;
                        }
                        for (int l = k - 1; l >= 0; l--)
                            _putchar(buffer[l]);
                    }
                }
                else
                {
                    _putchar(',');
                    _putchar(' ');
                    int k = 0;
                    if (product == 0)
                        _putchar('0');
                    else
                    {
                        while (product > 0)
                        {
                            buffer[k++] = (product % 10) + '0';
                            product /= 10;
                        }
                        for (int l = k - 1; l >= 0; l--)
                            _putchar(buffer[l]);
                    }
                }
            }
            _putchar('\n');
        }
    }
}
