#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - Function that prints a struct dog.
 * @d: Variable of type struct dog.
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	if (d->age <= 0)
		printf("Age: (nil)\n");
	else
		printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
