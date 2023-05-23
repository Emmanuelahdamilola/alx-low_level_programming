#include "dog.h"
#include <stddef.h>

/**
 * init_dog - function that initialize a variable
 * @d: dog to be initialized
 * @name: the dog name
 * @age: the dog age
 * @owner: the owner of the dog
 * Return: success
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
