#include "dog.h"

/**
 * print_dog - Allocates memory using malloc and checks for success.
 * @d: Number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory. If malloc fails, the function
 *         causes normal process termination with a status value of 98.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\nAge: %f\n, Owner: %s", d->name, d->age, d->owner);
	}
}
