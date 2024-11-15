#include "dog.h"

/**
 * init_dog - initialize a variabe of type
 * @d: parameters
 * @name:parameters
 * @age: parameters
 * @owner: parameters
 *
 * Return:0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
