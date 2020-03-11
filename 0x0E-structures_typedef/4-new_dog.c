#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 *
 * int: return the length of a string
 * @s: a pointer to char s
 *
 * Return: An integer with th length of a string
 */
int _strlen(char *s)
{
	int cont = 0;

	while (*s)
	{
		s++;
		cont++;
	}
	return (cont);
}
/**
 * _strdup - Function that returnd a pointer
 * to a newly allocated space in memory, which
 * contains a copy of the string given as a parameter.
 * @str: String given as a parameter.
 *
 * Return: A pointer
 */
char *_strdup(char *str)
{
	int size;
	char *sr;
	int i;

	if (str == NULL)
		return (NULL);
	size = _strlen(str);
	sr = malloc(sizeof(char) * size + 1);
	if (sr != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			*(sr + i) = *(str + i);
		}
		sr[i] = '\0';
		return (sr);
	}
	else
		return (NULL);
	return (0);
}
/**
 * new_dog - Function that creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(struct dog));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = _strdup(name);
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->age = age;
	my_dog->owner = _strdup(owner);
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}
	return (my_dog);
}
