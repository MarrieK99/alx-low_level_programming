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
if (name == NULL || owner == NULL)
return (NULL);

dog_t *new_dog_ptr;
/* Implementation of the new_dog function goes here */
}
/* Allocate memory for the new dog struct */
new_dog_ptr = malloc(sizeof(dog_t));
if (new_dog_ptr == NULL)
return (NULL);

/* Allocate memory for a copy of the name */
new_dog_ptr->name = malloc(sizeof(char) * (strlen(name) + 1));
if (new_dog_ptr->name == NULL)
{
free(new_dog_ptr);
return (NULL);
}

/* Allocate memory for a copy of the owner */
new_dog_ptr->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (new_dog_ptr->owner == NULL)
{
free(new_dog_ptr->name);
free(new_dog_ptr);
return (NULL);
}

/* Copy the name and owner to the new struct */
strcpy(new_dog_ptr->name, name);
strcpy(new_dog_ptr->owner, owner);

/* Set the age */
new_dog_ptr->age = age;

return (new_dog_ptr);
}







