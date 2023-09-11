#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;

struct dog {
  char *name;
  float age;
  char *owner;
};

void free_dog(dog_t *d);

#endif /* DOG_H */
