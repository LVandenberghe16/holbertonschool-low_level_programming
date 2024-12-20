#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the program's name followed by a new line
 * @ac: the argument count
 * @av: an array of strings representing the arguments passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%i\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
