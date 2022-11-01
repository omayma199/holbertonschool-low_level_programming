#include "dog.h"
/**
 * init_dog - entry point
 * @name : string
 * @age : float
 * @owner: string
 * @d: struct dog
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
