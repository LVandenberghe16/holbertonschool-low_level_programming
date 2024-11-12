#include "dog.h"

/**
 * free_dog - Allocates memory using malloc and checks for success.
 * @d: Number of bytes to allocate.
 *
 * Return: Pointer to the allocated memory. If malloc fails, the function
 *         causes normal process termination with a status value of 98.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
