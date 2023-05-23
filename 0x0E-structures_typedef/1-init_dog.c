#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize the dog structure
 *
 * @d: struct name
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
