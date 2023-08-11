#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: This program assigns a random number to
 * the variable n and prints whether the number is positive,
 * negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Seed the random number generator */
	srand(time(NULL));

	/* Generate a random number between -100 and 100 */
	n = rand() % 200 - 100;

	/* Print the generated number */
	printf("The number is: %d\n", n);

	/* Check if the number is positive, zero, or negative */
	if (n > 0)
	{
		printf("Positive: %d\n", n);
	}
	else if (n == 0)
	{
		printf("Zero.\n");
	}
	else
	{
		printf("Negative: %d\n", n);
	}

	return (0);
}
