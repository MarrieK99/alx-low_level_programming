#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog (a string)
 * @age: Age of the dog (a float)
 * @owner: Owner of the dog (a string)
 */

typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

