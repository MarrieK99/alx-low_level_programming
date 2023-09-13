#include "3-calc.h"

/* Function to perform addition */
int add(int a, int b)
{
    return (a + b);
}

/* Function to perform subtraction */
int sub(int a, int b)
{
    return (a - b);
}

/* Function to perform multiplication */
int mul(int a, int b)
{
    return (a * b);
}

/* Function to perform division */
int my_div(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
    }
    return (a / b);
}

/* Function to perform modulo */
int mod(int a, int b)
{
    if (b == 0)
    {
        printf("Error\n");
        exit(100);
}
return (a % b);
}

