#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* Function prototype for print_name */
void print_name(char *name, void (*f)(char *));
/* Function prototype for array_iterator */
void array_iterator(int *array, size_t size, void (*action)(int));
/* Function prototype for int_index */
int int_index(int *array, int size, int (*cmp)(int));
/* Function prototypes */
void print_opcodes(int argc, char *argv[]);








#endif /* FUNCTION_POINTERS_H */
