#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - Frees memory allocated for a dog
 * @d: Pointer to the dog structure to free
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;

/* Free the dynamically allocated name and owner strings */
free(d->name);
free(d->owner);

/* Free the dog structure itself */
free(d);
}

