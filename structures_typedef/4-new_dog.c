#include "dog.h"

/**
 * _strdup - duplicates a string in a newly allocated memory space
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if insufficient memory
 *         or if str is NULL
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;
	dup = (char *)malloc((length + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		dup[i] = str[i];
	dup[length] = '\0';
	return (dup);
}


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
	dog->name = _strdup(name);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = _strdup(owner);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->age = age;
	return (dog);
}
