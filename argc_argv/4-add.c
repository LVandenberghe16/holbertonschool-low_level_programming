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
	int i;
	int sum = 0;

	if (ac == 1)
	{
		printf("0");
		return (0);
	}
	for (i = 0; i != ac; i++)
		sum = sum + atoi(av[i]);
	printf("%i\n", sum);
	return (0);
}
