#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 *
 * Return: 0 on success, or an exit code on failure
 */
int main(int argc, char *argv[])
{
        if (argc != 2)
        {
        printf("Error\n");
        return (1);
        }

        int num_bytes = atoi(argv[1]);

        if (num_bytes < 0)
        {
        printf("Error\n");
        return (2);
        }

        unsigned char *main_ptr = (unsigned char *)main;

        int i;

        for (i = 0; i < num_bytes; i++)
        {
        printf("%02x", main_ptr[i]);
        if (i < num_bytes - 1)
                printf(" ");
        else
                printf("\n");
        }

        return (0);
}


