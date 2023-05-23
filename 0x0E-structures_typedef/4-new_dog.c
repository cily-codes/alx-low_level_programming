#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void);

/**
 * new_dog - Creates a new dog
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *luna = malloc(sizeof(dog_t));

	if (luna == NULL)
	{
		return (NULL);
	}

	luna->name = strdup(name);
	luna->age = age;
	luna->owner = strdup(owner);

	if (luna->name == NULL || luna->owner == NULL)
	{
		free(luna->name);
		free(luna->owner);
		free(luna);
		return (NULL);
	}

	return (luna);
}
