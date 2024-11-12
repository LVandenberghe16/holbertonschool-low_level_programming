#include "dog.h"

/**
 * new_dog - Allocates memory using malloc and checks for success.
 * @name: oui
 * @owner: oui
 * @age: oui
 *
 * Return: Pointer to the allocated memory. If malloc fails, the function
 *         causes normal process termination with a status value of 98.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	if (name != NULL)
		dog->name = _strdup(name);
	else
		return (NULL);
	if (owner != NULL)
		dog->owner = _strdup(owner);
	else
		return (NULL);
	dog->age = age;
	return (dog);
}
