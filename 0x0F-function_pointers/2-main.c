#include <stdio.h>
#include "function_pointers.h"

/* Function prototypes for comparison functions */
int is_98(int elem);
int is_strictly_positive(int elem);
int abs_is_98(int elem);

/**
 * main - Entry point
 *
 * Description: Demonstrates the use of int_index to search for integers in an array.
 *
 * Return: Always 0
 */
int main(void)
{
    int array[20] = {0, -98, 98, 402, 1024, 4096, -1024, -98, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 98};
    int index;

    /* Search for the first occurrence of 98 using is_98 function */
    index = int_index(array, 20, is_98);
    printf("%d\n", index);

    /* Search for the first occurrence of a number with absolute value 98 using abs_is_98 function */
    index = int_index(array, 20, abs_is_98);
    printf("%d\n", index);

    /* Search for the first strictly positive number using is_strictly_positive function */
    index = int_index(array, 20, is_strictly_positive);
    printf("%d\n", index);

    return (0);
}

/**
 * is_98 - Checks if a number is equal to 98
 * @elem: The integer to check
 *
 * Return: 1 if true, 0 if false
 */
int is_98(int elem)
{
    return (98 == elem);
}

/**
 * is_strictly_positive - Checks if a number is greater than 0
 * @elem: The integer to check
 *
 * Return: 1 if true, 0 if false
 */
int is_strictly_positive(int elem)
{
    return (elem > 0);
}

/**
 * abs_is_98 - Checks if the absolute value of a number is 98
 * @elem: The integer to check
 *
 * Return: 1 if true, 0 if false
 */
int abs_is_98(int elem)
{
    return (elem == 98 || -elem == 98);
}
