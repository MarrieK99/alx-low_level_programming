#include <stdio.h>
#include "function_pointers.h"

/* Function prototypes for printing functions */
void print_elem(int elem);
void print_elem_hex(int elem);

/**
 * main - Entry point
 *
 * Description: Demonstrates the use of array_iterator to apply functions to an array.
 *
 * Return: Always 0
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};

    /* Call array_iterator to print elements using print_elem function */
    array_iterator(array, 5, &print_elem);
    /* Call array_iterator to print elements in hexadecimal using print_elem_hex function */
    array_iterator(array, 5, &print_elem_hex);
    return (0);
}

/**
 * print_elem - Prints an integer
 * @elem: The integer to print
 *
 * Return: None
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - Prints an integer in hexadecimal
 * @elem: The integer to print
 *
 * Return: None
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}
