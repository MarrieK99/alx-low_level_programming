#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

int main(int argc, char *argv[])
{
    int num_bytes;

    /* Check if the number of arguments is correct */
    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    num_bytes = atoi(argv[1]);

    /* Check if the number of bytes is negative */
    if (num_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    int i;
    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", main[i]);
        if (i < num_bytes - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
