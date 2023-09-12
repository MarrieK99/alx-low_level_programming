#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog with a copy of name and owner
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: Pointer to the new dog struct or NULL if memory allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
char *name_copy, *owner_copy;
dog_t *new_dog_ptr;
/* Allocate memory for the dog structure */
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

/* Allocate memory for the name and owner strings and copy their contents */
name_copy = strdup(name);
owner_copy = strdup(owner);

if (name_copy == NULL || owner_copy == NULL)
{
free(name_copy);
free(owner_copy);
free(new_dog_ptr);
return (NULL);
}

new_dog_ptr->name = name_copy;
new_dog_ptr->age = age;
new_dog_ptr->owner = owner_copy;

return (new_dog_ptr);
}







