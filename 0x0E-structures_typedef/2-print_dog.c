#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 *
 * @d: Pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->owner == NULL)
		d->owner = "(nil)";
	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}