#include "mydog.h"

/**
 * init_dog - unction that initialize a variable of type struct dog
 * struct dog - structure tag
 * @name: value to be paased
 * @float: vlaue to be passed
 * @owner: value to be passed
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
