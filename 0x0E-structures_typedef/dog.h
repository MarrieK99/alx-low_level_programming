#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Name of the dog (a string)
 * @age: Age of the dog (a float)
 * @owner: Owner of the dog (a string)
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/* Prototype for the new_dog function */
dog_t *new_dog(char *name, float age, char *owner);

#endif

