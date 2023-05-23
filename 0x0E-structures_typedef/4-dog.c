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
/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	dog_t *my_dog = new_dog("Poppy", 3.5, "Bob");

	if (my_dog == NULL)
	{
		return (1);
	}

	printf("Name: %s\n", my_dog->name);
	printf("Age: %.1f\n", my_dog->age);
	printf("Owner: %s\n", my_dog->owner);

	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);

	return (0);
}
