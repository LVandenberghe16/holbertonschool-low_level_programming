#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Allocates memory using malloc and checks for success.
 * @d: Number of bytes to allocate.
 * @name: oui
 * @owner: oui
 * @age: oui
 *
 * Return: Pointer to the allocated memory. If malloc fails, the function
 *         causes normal process termination with a status value of 98.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
