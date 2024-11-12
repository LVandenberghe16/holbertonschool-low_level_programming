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
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
