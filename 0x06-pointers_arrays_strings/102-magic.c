#include <stdio.h>
/**
* main - Entry point of the program.
*
* Return: Always 0 (Success).
*/
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* Add one line of code here...
* use pointer arithmetic to modify value at a[2]
* and achieve the desired result.
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
