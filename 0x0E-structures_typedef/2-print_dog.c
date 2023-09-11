#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog's information
 * @d: Pointer to the struct dog to print
 *
 * Description: This function prints the information of a struct dog,
 * including its name, age, and owner. If any of these elements is NULL,
 * it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
if (d != NULL) /* Check if d is not NULL */
{
/* Print the dog's name or "(nil)" if name is NULL */
printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");

/* Print the dog's age */
printf("Age: %.6f\n", d->age);

/* Print the dog's owner or "(nil)" if owner is NULL */
printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");}
