#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - Creates a new dog
 *
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *luna;
	int cpy_name = 0, cpy_owner = 0;

	if (name != NULL && owner != NULL)
	{
		cpy_name = _strlen(name) + 1;
		cpy_owner = _strlen(owner) + 1;
		luna = malloc(sizeof(dog_t));

		if (luna == NULL)
		{
			return (NULL);
		}

		luna->name = malloc(sizeof(char) * cpy_name);

		if (luna->name == NULL)
		{
			free(luna);
			return (NULL);
		}

		luna->owner = malloc(sizeof(char) * cpy_owner);

		if (luna->owner == NULL)
		{
			free(luna->name);
			free(luna);
			return (NULL);
		}

		luna->name = _strcpy(luna->name, name);
		luna->owner = _strcpy(luna->owner, owner);
		luna->age = age;
	}

	return (luna);
}

/**
 * _strlen - length of a string
 *
 * @s: String to count
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s != '\0'; s++)
	{
		a++;
	}

	return (a);
}

/**
 * _strcpy - Copies string
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int b;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[b] = src[b];
	}

	dest[b++] = '\0';

	return (dest);
}
