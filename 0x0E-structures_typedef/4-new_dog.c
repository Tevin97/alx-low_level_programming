#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}

/**
 * _strcpy - copies a string to a new buffer
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog struct
 * @name: pointer to dog name string
 * @age: dog age
 * @owner: pointer to dog owner string
 *
 * Return: pointer to newly allocated dog struct
 *         or NULL if memory allocation fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length = _strlen(name);
	int owner_length = _strlen(owner);

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (name_length + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}
