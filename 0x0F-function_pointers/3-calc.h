#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>

/* Structure to hold operator and associated function */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;

/* Function prototypes */
int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int my_div(int a, int b);  // Rename the function here
int mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* CALC_H */

