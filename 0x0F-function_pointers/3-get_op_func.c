#include "3-calc.h"

/* Function to select the correct operation function */
int (*get_op_func(char *s))(int, int)
{
    op_t ops[] = {
        {"+", add},
        {"-", sub},
        {"*", mul},
        {"/", div},
        {"%", mod},
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].op)
    {
        if (*s == *ops[i].op && s[1] == '\0')
            return (ops[i].f);
        i++;
    }
    printf("Error\n");
    exit(99);
}
