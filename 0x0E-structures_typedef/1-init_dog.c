#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Function that initialize a variable of type struct dog.
 * @d: Variable of type struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Name of dog's owner.
 *
 * Return: Nothing
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
