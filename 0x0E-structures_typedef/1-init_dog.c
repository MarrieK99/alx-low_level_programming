#include <stddef.h>
#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Initializes a struct dog
 * @d: Pointer to the struct dog to initialize
 * @name: Name of the dog (a string)
 * @age: Age of the dog (a float)
 * @owner: Owner of the dog (a string)
 *
 * Description: This function initializes a struct dog with the provided
 * name, age, and owner values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL) /* Check if d is not NULL */
{
d->name = name;
d->age = age;
d->owner = owner;
}
}


