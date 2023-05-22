#ifndef MACROS_H
#define MACROS_H

/**
 *struct dog - structure tag for the structure elements
 * @name: structure member
 * @age: structure member
 * @owner: structure member
 */

struct dog
{
	char *name;
	float age;
	char *owner;

};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dot_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
