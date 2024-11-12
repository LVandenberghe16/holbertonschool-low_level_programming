#ifndef MAIN_H
#define MAIN_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */
