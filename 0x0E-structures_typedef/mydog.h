#ifndef MACROS_H
#define MACROS_H

/**
 * struct dog - structure tag that contains structure elements
 * @name: character value
 * @age: float value
 * @owner: character value
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
