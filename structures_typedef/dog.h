#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - a structure representing a point in 2D space
 * @name: the x coordinate of the point
 * @age: the y coordinate of the point
 * @owner: the y coordinate of the point
 */
struct dog
{
	char *name; /* name of the dog*/
	float age; /* age of the dog*/
	char *owner; /* owner of the dog*/
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
char *_strdup(char *str);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
